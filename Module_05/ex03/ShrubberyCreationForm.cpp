#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ) : Form("ShrubberyCreationForm", 145, 137), target(targ)
{
    std::cout << "ShrubberyCreationForm constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) :
    Form("ShrubberyCreationForm", 145, 137), target(obj.target)
{
    std::cout << "ShrubberyCreationForm copy constructor was called" << std::endl;
    if (obj.getSignInfo())
    {
        Bureaucrat joe("joe", 145);
        beSigned(joe);
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor was called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    std::cout << "ShrubberyCreationForm copy assignement operator can't copy" << std::endl;
    (void)obj;
    return *this;
}

void ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
    std::ofstream file;
    checkExecutability(executor);
    file.open(target + "_shrubbery");
	file << "      ,.," << std::endl;
	file << "      MMMM_    ,..," << std::endl;
	file << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
	file << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
	file << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
	file << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
	file << "        ,., _\"__ \\__./ .\"" << std::endl;
	file << "       MMMMM_\"  \"_    ./" << std::endl;
	file << "        ''''      (    )" << std::endl;
	file << " ._______________.-'____\"---._." << std::endl;
	file << "  \\                          /" << std::endl;
	file << "   \\________________________/" << std::endl;
	file << "   (_)                    (_)" << std::endl;
	file.close();
}
std::string ShrubberyCreationForm::getTarget( void ) const
{
    return (target);
}

std::ostream &	operator<<(std::ostream & out, const ShrubberyCreationForm & obj)
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

