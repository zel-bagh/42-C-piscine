#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string targ) : Form("RobotomyRequestForm", 72, 45), target(targ)
{
    std::cout << "RobotomyRequestForm constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) :
    Form("RobotomyRequestForm", 145, 137), target(obj.target)
{
    std::cout << "RobotomyRequestForm copy constructor was called" << std::endl;
    if (obj.getSignInfo())
    {
        Bureaucrat joe("joe", 145);
        beSigned(joe);
    }
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor was called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    std::cout << "ShrubberyCreationForm copy assignement operator can't copy" << std::endl;
    (void)obj;
    return *this;
}

void RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
    checkExecutability(executor);
    std::cout << "* Unbearable drilling noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << "Target " << target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "The robotomization on " << target << " has failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
    return (target);
}

std::ostream &	operator<<(std::ostream & out, const RobotomyRequestForm & obj)
{
	out << obj.getName() << ", Form is " ;
    if (obj.getSignInfo())
        out << "signed, ";
    else
        out << "not signed, ";
    out << "its target is " << obj.getTarget();
    out << ", grade required to sign it is " << obj.getGradeToSign() << " and grade required to execute is " << obj.getGradeToExecute() << std::endl;
	return out;
}

