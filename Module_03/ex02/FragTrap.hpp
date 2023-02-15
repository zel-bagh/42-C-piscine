#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string n = "nameless_FragTrap");
        ~FragTrap(void);
        FragTrap(FragTrap& obj);
        FragTrap& operator=(FragTrap& obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);
};

#endif