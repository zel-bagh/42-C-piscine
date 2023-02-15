#ifndef FORM_HPP
#define FORM_HPP

#include<string>
#include<exception>
#include<iostream>
#include"Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool form_signed;
        const int grade_required_to_sign_it;
        const int grade_required_to_execute_it;  
    public:
        Form(std::string n = "", int gs = 150, int ge = 150);
        Form(const Form& obj);
        virtual ~Form(void);
        Form& operator=(const Form& obj);
        std::string getName(void) const;
        bool getSignInfo(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        void beSigned(const Bureaucrat& obj);
        void checkExecutability(const Bureaucrat& obj) const;
        virtual void execute( const Bureaucrat &obj ) const = 0;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const _NOEXCEPT
                {
                    return("The grade is high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const _NOEXCEPT
                {
                    return("The grade is low");
                }
        };
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const _NOEXCEPT
                {
                    return("The form is not signed yet");
                }
        };
};

std::ostream &	operator<<( std::ostream & out, const Form & obj);

#endif
