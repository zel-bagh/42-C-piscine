#ifndef DOG_HPP
#define DOG_HPP

#include<string>
#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
    Brain* brain;
    public:
        Dog(void);
        Dog(Dog& obj);
        Dog& operator=(Dog& obj);
        ~Dog(void);
        void  makeSound(void) const;
        // void add_ideas(std::string s)
        // {
        //     brain->ideas[0] = s;
        // }
        //     void show_first_idea(void) const
        // {
        //     std::cout << "first idea is = " << brain->ideas[0]<< std::endl;
        // }

};

#endif