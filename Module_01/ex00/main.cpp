#include"Zombie.hpp"

int main(void)
{
    Zombie *a = newZombie("Fool");
    a->anounce();
    delete a;
    randomChump("newFool");
}