#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Fizz");

    ClapTrap b;

    a.attack("target");
    a.takeDamage(2);
    a.beRepaired(2);
    //a.show();
    b = a;
    //b.show();
    return 0;
}
