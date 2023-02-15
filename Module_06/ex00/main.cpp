#include"TypeAnalyst.hpp"
#include"utils.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        print_help();
        return (1);
    }
    try
    {
        TypeAnalyst obj(argv[1]);
        obj.printTypes();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}