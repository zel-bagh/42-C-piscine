#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>
#include <list>

int main(void)
{

    std::vector<int> tab(10);
    std::array<int, 5> tab2 = {1, 2, 3, 4, 5};

    int i = -1;
    while (++i < 10)
        tab[i] = i;
    try
    {
        std::cout << easyfind(tab, 9) << std::endl;
        std::cout << easyfind(tab2, 4) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}
