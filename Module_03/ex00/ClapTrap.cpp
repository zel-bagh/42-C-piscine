#include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n)
{
    std::cout << "constructor was called" << std::endl;
    name = n;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
    std::cout << "copy constructor was called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(ClapTrap& obj)
{
    std::cout << "Copy assignment operator was called" << std::endl;
    name = obj.name;
    hit_points = obj.hit_points;
    attack_damage = obj.attack_damage;
    energy_points = obj.energy_points;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor was called" << std::endl;
}

void  ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "CalpTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "CalpTrap " << name << " can't attack" << std::endl;;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "CalpTrap " << name << " has been damaged by " << amount << " points of damage!" << std::endl;;
    while (hit_points > 0 && amount-- > 0)
        hit_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0)
    {
        std::cout << "CalpTrap " << name << " has been repaired by " << amount << " points of healing!" << std::endl;
        hit_points += amount;
        energy_points--;
    }
    else 
        std::cout << "no energy point are left for CalpTrap " << name << " to repair theirself" << std::endl;;
}
