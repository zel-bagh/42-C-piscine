#include"WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor was called" << std::endl;
	type = "Cat";
}

WrongCat::WrongCat(WrongCat& obj)
{
    std::cout << "WrongCat copy constructor was called" << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(WrongCat& obj)
{
    std::cout << "WrongCat Copy assignment operator was called" << std::endl;
    type = obj.type;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor was called" << std::endl;
}

void  WrongCat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}