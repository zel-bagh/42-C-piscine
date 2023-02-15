#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<string>
#include<iostream>

class Weapon
{
    std::string type;
    public:
        Weapon(std::string s);
        ~Weapon();
        const std::string &getType();
        void    setType(std::string s);
};

#endif