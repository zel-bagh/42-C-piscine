#include"HumanB.hpp"
HumanB::~HumanB()
{

}
HumanB::HumanB(std::string n)
{
    name = n;
}
void HumanB::setWeapon(Weapon &w)
{
    wp = &w;
}
void    HumanB::attack(void)
{
    std::cout << name << " attacks with " << wp->getType() << std::endl;
    
}