#ifndef ZOMBIEE_HPP
#define ZOMBIEE_HPP
#include<string>
#include<iostream>

class Zombie
{
    std::string name;
    public:
        Zombie(std::string a);
        Zombie();
        ~Zombie();
        void    anounce(void);
        void    setName(std::string n);
};

Zombie* zombieHorde(int N, std::string name);

#endif