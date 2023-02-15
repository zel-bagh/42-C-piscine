#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include<fstream>
class ShrubberyCreationForm : public Form
{
    private:
	    const std::string		target;
    public:
	    ShrubberyCreationForm(std::string tar="");
	    ShrubberyCreationForm( const ShrubberyCreationForm &obj );
	    ~ShrubberyCreationForm( void );
	    ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &obj );
	    std::string	getTarget( void ) const;
		void checkExecutability(const Bureaucrat& obj) const;
	    virtual void execute( const Bureaucrat &executor ) const;
};

std::ostream &	operator<<( std::ostream & out, const ShrubberyCreationForm & obj);
#endif
