#include"Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern constructor was called" << std::endl;
};

Intern::~Intern(void)
{
    std::cout << "Intern destructor was called" << std::endl;
}

Intern::Intern(const Intern& obj)
{
    (void)obj;
    std::cout << "Intern copy constructor was called" << std::endl;
}

Intern& Intern::operator=(const Intern& obj)
{
    (void)obj;
    std::cout << "Intern copy assignement operator was called" << std::endl;
    return *this;
}

Form* Intern::makeForm(std::string FormName, std::string formTarget)
{
	t_formList forms[] = 
	{
		{ "presidential pardon", new PresidentialPardonForm(formTarget) },
		{ "robotomy request", new RobotomyRequestForm(formTarget) },
		{ "shrubbery creation", new ShrubberyCreationForm(formTarget) },
		{ "", NULL }
	};
	Form	*resultForm = NULL;
	for (int i = 0; forms[i].form != NULL; i++)
	{
		if (forms[i].formName == FormName)
			resultForm = forms[i].form;
		else
			delete forms[i].form;
	}
	if (resultForm == NULL)
		std::cout << "Intern did not find the form " << FormName << std::endl;
	else
		std::cout << "Intern creates " << FormName << std::endl;
	return resultForm;
}
