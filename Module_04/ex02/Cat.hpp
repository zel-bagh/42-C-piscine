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
        // void add_ideas(std::string s)
        // {
        //     brain->ideas[0] = s;
        // }
        // void show_first_idea(void) const
        // {
        //     std::cout << "first idea is = " << brain->ideas[0]<< std::endl;
        // }
};

#endif