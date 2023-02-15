#ifndef CAT_HPP
#define CAT_HPP

#include<string>
#include<iostream>
#include"Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat& obj);
        Cat& operator=(Cat& obj);
        ~Cat(void);
        void makeSound(void) const;
};

#endif