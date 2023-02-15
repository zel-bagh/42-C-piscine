#include"Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor was called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat& obj)
{
    std::cout << "Cat copy constructor was called" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(Cat& obj)
{
    std::cout << "Cat Copy assignment operator was called" << std::endl;
    type = obj.type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor was called" << std::endl;
}

void  Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}
