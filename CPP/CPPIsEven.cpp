#include<stdio.h>
#include<string>
#include"CPPIsEvenUtils.hpp"

int main (int argc, char** argv)
{
    bool verbose = true;
    int result = -1;

    //verify arguments passed
    if (argc < 2)
        {
            IsEven::PrintHelp();
            return result;
        }

    //Firstly, iterate over flags
    //Though help provides syntax as give flags before numbers, sometimes things happen
    for(int i = 1; i < argc; i++)
    {
        auto flag = std::string(argv[i]);

        if (flag.compare("-s") == 0 || flag.compare("--Silent") == 0)
        {
            verbose = false;
        }
        
        if (flag.compare("-h") == 0 || flag.compare("--Help") == 0)
        {
            IsEven::PrintHelp();
            return result;
        }
        
        if (flag.compare("-v") == 0 || flag.compare("--Version") == 0)
        {
            IsEven::PrintVersion();
            return result;
        }        
    }

    //iterate over possible numbers
    for(int i = 1; i < argc; i++)
        if (argv[i][0] >= 48 && argv[i][0] < 58)
        {
            int x = std::stoi(argv[i]);

            if (IsEven::IsEven(x))
            {
                if(verbose)
                    printf("%i is even\n", x);
                result = 1;
            }   
            else 
            {
                if(verbose)
                    printf("%i is odd\n", x);
                result = 0;
            }
        }
    return result;
}
