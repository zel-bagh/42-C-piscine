#include<iostream>
#include<string>


int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "memory adress of the string variable is: "<< &s << std::endl;
    std::cout << "memory adress held by stringPTR is: " << stringPTR << std::endl;
    std::cout << "memory adress held by stringREF is: " << &stringREF << std::endl;

    std::cout << "value of the string variable is: "<< s << std::endl;
    std::cout << "value pointed to by stringPTR is: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF is: " << stringREF << std::endl;
}