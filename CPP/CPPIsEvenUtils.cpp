#include <stdio.h>
#include "CPPIsEvenUtils.hpp"

#define PROG_VERS "1.0"

#if defined(_WIN32)
#define PROG_NAME "IsEven.exe"
#else
#define PROG_NAME "iseven"
#endif

namespace IsEven {
    void PrintHelp()
    {
        printf("\nIsEven - A C++ implemented program to determine if a provided positive whole number is even.\n");
        printf("  Program returns code -1 for no input, 0 for even, 1 for odd.\n  Return code is only supplied for the last provided number.");
        printf(PROG_NAME);
        printf("<options> [number, number,...]\n\n  options : \n");
        printf("    -s | --Silent : suppress printed output\n");
        printf("    -v | --Version : print program version number to console and quit\n");
        printf("    -h | --Help : print this page to console and quit\n");
    }

    void PrintVersion()
    {
        printf(PROG_NAME);
        printf(" - ");
        printf(PROG_VERS);
        printf("\n");
    }


}