#include"Form.hpp"

Form::Form(std::string n, int gs, int ge) : name(n), grade_required_to_sign_it(gs), grade_required_to_execute_it(ge)
{
    std::cout << "Form constructor was called" << std::endl;
    if (gs < 1 || ge <1)
        throw GradeTooHighException();
    if (gs  > 150 || ge >150) 
        throw GradeTooLowException();
    form_signed = 0;
}

Form::Form(const Form& obj) : name(obj.name), grade_required_to_sign_it(obj.grade_required_to_sign_it),grade_required_to_execute_it(obj.grade_required_to_execute_it)
{
    std::cout << "Form copy constructor was called" << std::endl;
    *this = obj;
}

Form::~Form(void)
{
    std::cout << "Form destructor was called" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
    std::cout << "Form copy assignement operator was called" << std::endl;
    form_signed = obj.form_signed;
    return *this;
}

std::string Form::getName(void) const
{
    return (name);
}

bool Form::getSignInfo(void) const
{
    return (form_signed);
}

int Form::getGradeToSign(void) const
{
    return (grade_required_to_sign_it);
}

int Form::getGradeToExecute(void) const
{
    return (grade_required_to_execute_it);
}

void Form::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > grade_required_to_sign_it)
        throw GradeTooLowException();
    form_signed = true;
}

std::ostream &	operator<<(std::ostream & out, const Form & obj)
{
	out << obj.getName() << ", Form is " ;
    if (obj.getSignInfo())
        out << "signed, ";
    else
        out << "not signed, ";
    out << "grade required to sign it is " << obj.getGradeToSign() << " and grade required to execute is " << obj.getGradeToExecute() << std::endl;
	return out;
}


