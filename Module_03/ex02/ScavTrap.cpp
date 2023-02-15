#include"ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    std::cout << "ScavTrap constructor was called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor was called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& obj):ClapTrap()
{
    std::cout << "ScavTrap copy constructor was called" << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(ScavTrap& obj)
{
    std::cout << "ScavTrap copy assignment operator was called" << std::endl;
    name = obj.name;
    hit_points = obj.hit_points;
    attack_damage = obj.attack_damage;
    energy_points = obj.energy_points;
    return *this;
}

void  ScavTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " can't attack" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << name << " has been damaged by " << amount << " points of damage!" << std::endl;
    while (hit_points > 0 && amount-- > 0)
        hit_points--;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0)
    {
        std::cout << "ScavTrap " << name << " has been repaired by " << amount << " points of healing!" << std::endl;
        while (amount-- > 0)
            hit_points++;
        energy_points--;
    }
    else 
        std::cout << "no energy point are left for ScavTrap " << name << " to repair theirself" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
