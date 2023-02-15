#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include<string>
#include<iostream>
#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat& obj);
        WrongCat& operator=(WrongCat& obj);
        ~WrongCat(void);
        void makeSound(void) const;
};

#endif