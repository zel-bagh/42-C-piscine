#ifndef  CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<string>
#include<iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ClapTrap(std::string n = "nameless_ClapTrap");
        ClapTrap(ClapTrap& obj);
        ClapTrap& operator=(ClapTrap& obj);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // void show(void)
        // {
        //     std::cout << "name = " << name << std::endl;
        //     std::cout << "hit points = " << hit_points << std::endl;
        //     std::cout << "energy points = " << energy_points << std::endl;
        //     std::cout << "attack damage = " << attack_damage << std::endl;
        // }
};

#endif