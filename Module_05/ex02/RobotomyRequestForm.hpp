#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
class RobotomyRequestForm : public Form
{
    private:
	    const std::string		target;
    public:
	    RobotomyRequestForm(std::string tar="");
	    RobotomyRequestForm( const RobotomyRequestForm &obj);
	    ~RobotomyRequestForm( void );
	    RobotomyRequestForm	&operator=( const RobotomyRequestForm &obj );
	    std::string	getTarget( void ) const;
		void checkExecutability(const Bureaucrat& obj) const;
	    virtual void execute( const Bureaucrat &executor ) const;
};

std::ostream &	operator<<( std::ostream & out, const RobotomyRequestForm & obj);
#endif
