package Java;
public class JavaIsEven{
    
    static String programVersion = "1.0";

    public static void main(String[] args)
    {
        boolean verbose = true;
        int exitcode = -1;

        if (args.length < 1)
        {
            PrintHelp();
            System.exit(exitcode);
        }

        for (String string : args) {
            if (string.matches("-s") || string.matches("--Silent"))
                verbose = false;
            if (string.matches("-h") || string.matches("--Help"))
            {
                PrintHelp();
                System.exit(exitcode);
            }
            if (string.matches("-v") || string.matches("--Version"))
            {
                
            }
        }
        
        for (String string : args) {
            int num = 0;
            try
            {
                num = Integer.parseInt(string);
                if ((num & 1) == 0)
                {
                    if (verbose)
                        System.out.println(num + "is even\n");
                    exitcode = 0;
                }
                else
                {
                    if (verbose)
                        System.out.println(num + "is odd\n");
                    exitcode = 1;
                }
            }
            catch (Exception e)
            {
                // do nothing as it is expected to encounter errors in parsing when flags are presented

            }
        }
        
            
        System.exit(exitcode);
    } 

    public static void PrintHelp()
    {
        System.out.println("""
            
            IsEven - A Java implemented program to determine if a provided positive whole number is even.
              Program returns code -1 for no input, 0 for even, 1 for odd.
              Return code is only supplied for the last provided number.
            
            <options> [number, number,...]
            
            options : 
                -s | --Silent : suppress printed output
                -v | --Version : print program version number to console and quit
                -h | --Help : print this page to console and quit

                """);
    }

    public static void PrintVersion()
    {
        System.out.println("IsEven - " + programVersion);
    }

    public static boolean IsEven(int num)
    {
        /*
            A provided number, say 5, in binary is 
            ... 0000 0101
            
            bitwise and'ing 1 does this:
            ... 0000 0101
            ... 0000 0001 &
            ---------------
            ... 0000 0001

            Where both the 1's position is set, giving us the result of 1.

            However, all even integral numbers do not have the first bit set, by design.
            So, given 6 and bitwise and'ing 1 does this:
            ... 0000 0110
            ... 0000 0001 &
            ---------------
            ... 0000 0000

            The outcome of the operation is 1 == odd and 0 == even.
                        
            Java does not implicitly cast an integral value to a boolean.
        */
        
        if ((num & 1) == 0)
            return true;
        return false;
    }
}
