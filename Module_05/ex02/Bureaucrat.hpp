#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<string>
#include<exception>
#include<iostream>
#include"Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string n = "", int g = 150);
        Bureaucrat(const Bureaucrat& obj);
        ~Bureaucrat(void);
        Bureaucrat& operator=(const Bureaucrat& obj);
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(int q);
        void decrementGrade(int q);
        void signForm(Form& obj) const;
        void executeForm(Form const & obj);
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const _NOEXCEPT
                {
                    return("The grade you set is too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const _NOEXCEPT
                {
                    return("The grade you set is too low");
                }
        };
};

std::ostream &	operator<<( std::ostream & out, const Bureaucrat & obj);

#endif
