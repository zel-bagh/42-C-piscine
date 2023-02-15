#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor was called" << std::endl;

}

WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy constructor was called" << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& obj)
{
    std::cout << "WrongAnimal Copy assignment operator was called" << std::endl;
    type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor was called" << std::endl;
}

std::string WrongAnimal::getType(void)
{
    return (type);
};

void  WrongAnimal::makeSound(void) const
{
        std::cout << "???" << std::endl;
}
