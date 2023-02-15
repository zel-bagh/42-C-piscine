#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int	main(void)
{
	Intern		intern;
	Bureaucrat	nami("nami", 3);
	Form		*form;

	form = intern.makeForm("this one doesn't exist", "Justin");
	if (form)
		delete form;
	form = intern.makeForm("presidential pardon", "Maynard");
	if (form)
		delete form;
	form = intern.makeForm("shrubbery creation", "Danny");
	if (form)
		delete form;
	form = intern.makeForm("robotomy request", "Adam");
	form->beSigned(nami);
	std::cout << *form;
	form->execute(nami);
	if (form)
		delete form;
}
