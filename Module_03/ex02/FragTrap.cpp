#include"FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    std::cout << "FragTrap constructor was called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor was called" << std::endl;
}

FragTrap::FragTrap(FragTrap& obj):ClapTrap()
{
    std::cout << "FragTrap copy constructor was called" << std::endl;
    *this = obj;
}

FragTrap& FragTrap::operator=(FragTrap& obj)
{
    std::cout << "FragTrap copy assignment operator was called" << std::endl;
    name = obj.name;
    hit_points = obj.hit_points;
    attack_damage = obj.attack_damage;
    energy_points = obj.energy_points;
    return *this;
}

void  FragTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << name << " can't attack" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << name << " has been damaged by " << amount << " points of damage!" << std::endl;
    while (hit_points > 0 && amount-- > 0)
        hit_points--;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0)
    {
        std::cout << "FragTrap " << name << " has been repaired by " << amount << " points of healing!" << std::endl;
        while (amount-- > 0)
            hit_points++;
        energy_points--;
    }
    else 
        std::cout << "no energy point are left for FragTrap " << name << " to repair theirself" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " has asked for a high five" << std::endl;
}
