#include"Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "program works with one arguments" << std::endl;
        return (1);
    }
    int i;
    Harl k;
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = -1;
    while (++i < 4)
    {
        if (list[i] == argv[1])
            break ;
    }
    if (i != 4)
    {
        switch (i)
        {
            case 0:
                k.complain("DEBUG");
            case 1:
                k.complain("INFO");
            case 2:
                k.complain("WARNING");
            case 3:
                k.complain("ERROR");
            break ;
        }
        return 0;
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
    return 1;
}       