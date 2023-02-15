#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<string>
#include<iostream>

class Brain
{
    public:
    std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain& obj);
        Brain& operator=(Brain& obj);
        ~Brain(void);
};

#endif