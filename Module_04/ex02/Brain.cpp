#include"Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor was called" << std::endl;

}

Brain::Brain(Brain & obj)
{
	std::cout << "Brain copy constructor was called" << std::endl;
	*this = obj;
}

Brain&	Brain::operator=(Brain& obj)
{
	std::cout << "Brain copy assignment operator was called" << std::endl;
	int i = -1;
	while(++i < 100)
	{
		ideas[i] = obj.ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain deststructor was called" << std::endl;
}
