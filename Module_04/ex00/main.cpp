#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
Animal* meta = new Animal();
Animal* j = new Dog();
Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();


WrongAnimal *B = new WrongCat();
std::cout << B->getType() << " " << std::endl;
B->makeSound();


std::cout << "==deleting objects=="<< std::endl;
delete meta;
delete j;
delete i;
delete B;

return 0;
}