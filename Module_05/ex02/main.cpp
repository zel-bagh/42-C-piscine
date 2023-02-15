#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);

	// try
	// {
	// 	form = new PresidentialPardonForm("28Z");
	// 	form->execute(bob);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	//}

	// try
	// {
	// 	form = new PresidentialPardonForm("28A");
	// 	form->beSigned(bob);
	// 	form->execute(bob);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }


	// try
	// {
	// 	form = new RobotomyRequestForm("28B");
	// 	form->beSigned(bob);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	form->execute(phil);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }


	try
	{
		form = new ShrubberyCreationForm("28C");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}