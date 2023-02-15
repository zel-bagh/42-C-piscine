#include"HumanA.hpp"
HumanA::~HumanA()
{}
HumanA::HumanA(std::string n, Weapon &w) : wp(w),name(n)
{}
void    HumanA::attack(void)
{
    std::cout << name << " attacks with " << wp.getType() << std::endl;
    
}