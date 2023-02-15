#include"Zombie.hpp"

Zombie::Zombie(std::string a) : name(a)
{
}
Zombie::Zombie()
{    
}
Zombie::~Zombie()
{
    std::cout << name << " has been destroyed" << std::endl;
}

void    Zombie::anounce(void)
{
    std::cout  << name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}

void  Zombie::setName(std::string n)
{
    name = n;
}
