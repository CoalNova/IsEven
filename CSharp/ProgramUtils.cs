class ProgramUtils
{

    const string programVersion = "1.0";

    /// Prints out help to console
    public static void PrintHelp()
    {
         System.Console.WriteLine(@"
            
            IsEven - A C# implemented program to determine if a provided positive whole number is even.
              Program returns code -1 for no input, 0 for even, 1 for odd.
              Return code is only supplied for the last provided number.
            
            <options> [number, number,...]
            
            options : 
                -s | --Silent : suppress printed output
                -v | --Version : print program version number to console and quit
                -h | --Help : print this page to console and quit

                ");

    }

    /// Prints out the version
    public static void PrintVersion()
    {
        System.Console.WriteLine("iseven.exe - " + programVersion);
    }

    /// Returns if the provided number is even
    public static bool IsEven(int num)
    {
        if ((num & 1) == 0)
            return true;
        return false;
    }
}