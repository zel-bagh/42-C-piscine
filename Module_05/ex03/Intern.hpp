#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"

class Intern
{
    public:
	    Intern(void);
	    Intern( const Intern &obj );
	    ~Intern( void );
	    Intern	&operator=( const Intern &obj );
        Form* makeForm(std::string FormName, std::string formTarget);
	private:
		typedef struct	s_formList
		{
			std::string	formName;
			Form		*form;
		}				t_formList;
};

#endif
