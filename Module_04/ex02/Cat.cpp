#include"Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor was called" << std::endl;
	type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat& obj)
{
    std::cout << "Cat copy constructor was called" << std::endl;
    brain = new Brain();
    *this = obj;
}

Cat& Cat::operator=(Cat& obj)
{
    std::cout << "Cat Copy assignment operator was called" << std::endl;
    *brain = *(obj.brain);
    type = obj.type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor was called" << std::endl;
    delete brain;
}

void  Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

