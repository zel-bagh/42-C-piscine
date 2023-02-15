#include"Zombie.hpp"
#include<unistd.h>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *a = new Zombie[N];
    while (--N >= 0)
        a[N].setName(name);
    return (a);
}