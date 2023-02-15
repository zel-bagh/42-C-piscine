#ifndef ZOMBIEE_HPP
#define ZOMBIEE_HPP
#include<string>
#include<iostream>

class Zombie
{
    std::string name;
    public:
        Zombie(std::string a);
        Zombie(void);
        ~Zombie();
        void    anounce(void);
};

Zombie*     newZombie(std::string name);
void randomChump(std::string name);
#endif