#include"Weapon.hpp"

Weapon::Weapon(std::string s)
{
    
    type = s;
}
Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
    return(type);
}
void    Weapon::setType(std::string s)
{
    type = s;
}
