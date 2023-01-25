public static class Program
{
    public static int Main(String[] args)
    {
        int exitCode = -1;
        bool verbose = true;

        // if nothing has been passed to the program, print help and exit
        if (args.Length < 1)
        {
            ProgramUtils.PrintHelp();
            return exitCode;
        }

        // check for any flags first
        foreach(String s in args)
        {
            if (s.Equals("-s") || s.Equals("--Silent"))
                verbose = false;
            if (s.Equals("-v") || s.Equals("--Version"))
            {
                ProgramUtils.PrintVersion();
                return exitCode;
            }
            if (s.Equals("-h") || s.Equals("--Help"))
            {
                ProgramUtils.PrintHelp();
                return exitCode;
            }           

        }

        // then check for any passed numbers
        foreach (String s in args)
        {
            int num = 0;
            if (int.TryParse(s,null, out num))
            {
                if (ProgramUtils.IsEven(num))
                {
                    if (verbose)
                        System.Console.WriteLine(num.ToString() + " is even\n");
                    exitCode = 0;
                }
                else
                {
                    if (verbose)
                        System.Console.WriteLine(num.ToString() + " is odd\n");
                    exitCode = 1;
                }
            }
        }

        return exitCode;
    }

    
}