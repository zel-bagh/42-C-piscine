#include"Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor was called" << std::endl;

}

Animal::Animal(Animal& obj)
{
    std::cout << "Animal copy constructor was called" << std::endl;
    *this = obj;
}

Animal& Animal::operator=(Animal& obj)
{
    std::cout << "Animal Copy assignment operator was called" << std::endl;
    type = obj.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor was called" << std::endl;
}

std::string Animal::getType(void)
{
    return (type);
};

void  Animal::makeSound(void) const
{
        std::cout << "???" << std::endl;
}
