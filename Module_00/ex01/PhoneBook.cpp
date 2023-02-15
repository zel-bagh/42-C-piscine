#include "PhoneBook.hpp"

Contact::Contact(void)
{
    state = 0;
}

PhoneBook::PhoneBook()
{
    index = 0;
    inc = 1;
}

void    PhoneBook::add_contact(void)
{
    if (index == 8)
    {
        index = 0;
        inc = 0;
    }
    contacts[index].state = 1;
    std::cout << "first name:";
    std::cin >> contacts[index].first_name;
    std::cout << "last name:";
    std::cin >> contacts[index].last_name;
    std::cout << "nickname:";
    std::cin >> contacts[index].nickname;
    std::cout << "phone number:";
    std::cin >> contacts[index].phone_number;
    std::cout << "darkest secret:";
    std::cin >> contacts[index].darkest_secret;
    if (inc == 1)
        index++;
}

void    PhoneBook::print_string(std::string a)
{
    int max;
    int dot;
    int i;

    dot = 0;
    if (a.size() > 10)
    {
        dot = 1;
        max = 10;
    }
    else
    {
        max = a.size();
        i = 10 - max;
        while (i-- > 0)
         std::cout << " ";
    }
    i = -1;  
    while (++i < max)
    {
        if (i == 9 && dot == 1)
            std::cout << ".";
        else
            std::cout << a[i];
    }
}

void    PhoneBook::show_contacts(void)
{
    int i;
    int c;
    int j;

    i = -1;
    c = 0;
    std::cout << "  index   |first name| last name| nick name" << std::endl;
    while (++i < 8)
    {
        if (contacts[i].state == 0)
            break;
        c = 1;
        std::cout << "         " << i + 1 << "|" ;
        print_string(contacts[i].first_name);
        std::cout << "|";
        print_string(contacts[i].last_name);
        std::cout << "|";
        print_string(contacts[i].nickname);
        std::cout << std::endl;
    }
    if (c == 1)
    {
        std::cout << "enter the index of a contact for more information" << std::endl;
        std::cin >> j;
        if (j < 1 || j > i)
        {
            std::cout << "invalid index, u've been returned to main menu" << std::endl;
            return;
        }
        std::cout << "contact number " << j << std::endl;
        std::cout << "first name: " << contacts[j - 1].first_name << std::endl;
        std::cout << "last name: " << contacts[j - 1].last_name << std::endl;
        std::cout << "nickname: " << contacts[j - 1].nickname << std::endl;
        std::cout << "phone name: " << contacts[j - 1].phone_number << std::endl;
        std::cout << "darkest secret: " << contacts[j - 1].darkest_secret << std::endl;
    }
}

int main(void)
{
    int c;
    class           PhoneBook pb;
    std::string     input;

    while (1)
    {
        c = 0;
        std::cout << "commands: ADD, SEARCH, EXIT" << std::endl;
        std::cin >> input;
        if (input == "ADD")
        {
            c = 1;
            pb.add_contact();
        }
        if (input == "SEARCH")
        {
            c = 1;
            pb.show_contacts();
        }
        if (input == "EXIT")
            return (0);
        if (c == 0)
            std::cout << "invalid command" << std::endl;
    }
}