#ifndef CAT_HPP
#define CAT_HPP

#include<string>
#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
    Brain* brain;
    public:
        Cat(void);
        Cat(Cat& obj);
        Cat& operator=(Cat& obj);
        ~Cat(void);
        void makeSound(void) const;
};

#endif