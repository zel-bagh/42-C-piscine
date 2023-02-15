#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
    std::cout << "Bureaucrat constructor was called" << std::endl;
    if (g < 1)
        throw GradeTooHighException();
    if (g  > 150)
        throw GradeTooLowException();
    grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name)
{
    std::cout << "Bureaucrat copy constructor was called" << std::endl;
    *this = obj;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor was called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    std::cout << "Bureaucrat copy assignement operator was called" << std::endl;
    grade = obj.grade;
    return *this;
}

std::string Bureaucrat::getName(void) const
{
    return (name);
}
int Bureaucrat::getGrade(void) const
{
    return (grade);
}

void Bureaucrat::incrementGrade(int q)
{
    grade -= q;
    if (grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(int q)
{
    grade += q;
    if (grade > 150)
        throw GradeTooLowException();
}
void Bureaucrat::signForm(Form& obj) const
{
    try
    {
        obj.beSigned(*this);
        std::cout << "Bureaucrat " << getName() << " signed form " << obj.getName() << std::endl;
    }
    catch(std::exception&)
    {
        std::cout << "Bureaucrat " << getName() << " couldn't sign form " << obj.getName() << " because his grade is too low" << std::endl;
    }
}
void Bureaucrat::executeForm(Form const & obj)
{
    try
    {
        obj.execute(*this);
        std::cout << "Bureaucrat " << getName() << " executed form " << obj.getName() << std::endl;
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cout << "Bureaucrat " << getName() << " couldn't executed form " << obj.getName() << " because his grade is low" << std::endl;
    }
    catch(Form::FormNotSignedException& e)
    {
        std::cout << "Bureaucrat " << getName() << " couldn't executed form " << obj.getName() << " because " << e.what()<< std::endl;
    }
}

std::ostream &	operator<<(std::ostream & out, const Bureaucrat & obj)
{
	out << obj.getName() << ", Bureaucrat grade " << obj.getGrade();
	return out;
}

