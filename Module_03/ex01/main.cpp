#include"ScavTrap.hpp"

int main(void)
{
    ScavTrap a("fizz");
    // a.show();
    a.guardGate();
    a.attack("target");
    a.takeDamage(2);
    a.beRepaired(2);
    // a.show();
    ScavTrap b("Nami");
    // b.show();
    b = a;
//    b.show();
}