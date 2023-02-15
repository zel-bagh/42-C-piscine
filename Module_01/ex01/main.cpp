#include"Zombie.hpp"

int main(void)
{
    Zombie *a;
    int N;

    N = 3;
    a = zombieHorde(N, "FooL");
    while(--N >= 0)
    {
        a[N].anounce();
    }
    delete[] a;
}