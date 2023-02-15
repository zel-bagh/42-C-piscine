#ifndef HUMMANA_HPP
#define HUMMANA_HPP
#include"Weapon.hpp"

class HumanA
{
    Weapon &wp;
    std::string name;
    
    public:
        HumanA(std::string n, Weapon &w);
        ~HumanA();
        void    attack(void);
};

#endif