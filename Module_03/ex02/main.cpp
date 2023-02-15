#include"FragTrap.hpp"

int main(void)
{
    FragTrap a("fizz");
    //a.show();
    a.highFivesGuys();
    a.attack("target");
    a.takeDamage(2);
    a.beRepaired(2);
    //a.show();
    FragTrap b = a;
    //b.show();
}