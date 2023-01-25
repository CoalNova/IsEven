#pragma once

namespace IsEven {

    ///Prints out help text to console
    void PrintHelp();

    ///Prints out version to console
    void PrintVersion();

    ///Returns if provided unsigned int is even
    inline bool IsEven(const unsigned int& num)
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
                        
            C and Cpp impl define anything not zero as true.
        */
        if (num & 1)
            return false;
        return true;
    }
}