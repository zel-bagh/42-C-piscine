#include"Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor was called" << std::endl;
	type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog& obj)
{
    std::cout << "Dog copy constructor was called" << std::endl;
    brain = new Brain();
    *this = obj;
}

Dog& Dog::operator=(Dog& obj)
{
    std::cout << "Dog Copy assignment operator was called" << std::endl;
    *brain = *(obj.brain);
    type = obj.type;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor was called" << std::endl;
    delete brain;
}

void  Dog::makeSound(void) const
{
    std::cout << "Wouf" << std::endl;
}
