#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include<string>
#include<iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal& obj);
        WrongAnimal& operator=(WrongAnimal& obj);
        ~WrongAnimal(void);
        std::string getType(void);
        void makeSound(void) const;
};

#endif