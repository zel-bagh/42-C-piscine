#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
    private:
	    const std::string		target;
    public:
	    PresidentialPardonForm(std::string tar="");
	    PresidentialPardonForm( const PresidentialPardonForm &obj );
	    ~PresidentialPardonForm( void );
	    PresidentialPardonForm	&operator=( const PresidentialPardonForm &obj);
	    std::string	getTarget( void ) const;
		void checkExecutability(const Bureaucrat& obj) const;
	    virtual void execute( const Bureaucrat &executor ) const;
};

std::ostream &	operator<<( std::ostream & out, const PresidentialPardonForm & obj);
#endif
