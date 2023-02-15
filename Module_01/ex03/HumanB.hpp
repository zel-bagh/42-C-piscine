#ifndef HUMMANB_HPP
#define HUMMANB_HPP
#include"Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon *wp;
    public:
        HumanB(std::string n);
        ~HumanB();
        void    setWeapon(Weapon &w);
        void    attack(void);
};

#endif