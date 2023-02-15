#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string targ) : Form("PresidentialPardonForm", 25, 5), target(targ)
{
    std::cout << "PresidentialPardonForm constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) :
    Form("PresidentialPardonForm", 25, 5), target(obj.target)
{
    std::cout << "PresidentialPardonForm copy constructor was called" << std::endl;
    if (obj.getSignInfo())
    {
        Bureaucrat joe("joe", 145);
        beSigned(joe);
    }
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor was called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    std::cout << "PresidentialPardonForm copy assignement operator can't copy" << std::endl;
    (void)obj;
    return *this;
}

void PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
    checkExecutability(executor);
    std::cout << "Target " << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
    return (target);
}

std::ostream &	operator<<(std::ostream & out, const PresidentialPardonForm & obj)
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
