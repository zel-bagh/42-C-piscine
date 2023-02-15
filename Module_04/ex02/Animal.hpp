#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<string>
#include<iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(Animal& obj);
        Animal& operator=(Animal& obj);
        virtual ~Animal(void);
        std::string getType(void);
        virtual void makeSound(void) const = 0;
};

#endif