#include"Dog.hpp"
#include"Cat.hpp"


int main()
{
	Animal* animal[2];

	animal[0] = new Cat();
	animal[1] = new Dog();

	int i = -1;
	while(++i < 2)
	    delete animal[i];
	// Dog basic;
	// {
	// 	basic.add_ideas("i wanna sleep");
	// 	Dog tmp = basic;
	// 	std::cout << "tmp "; tmp.show_first_idea();
	// 	std::cout << "basic "; basic.show_first_idea();
	// }
	// basic.add_ideas("i wanna sleep");
	// std::cout << "basic "; basic.show_first_idea();
	//system("leaks Animal");
return 0;
}