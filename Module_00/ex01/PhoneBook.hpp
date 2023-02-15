#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include<iostream>
#include<string>

class Contact
{
    public:
        int state;
        Contact();
        std::string first_name,
                    last_name,
                    nickname,
                    phone_number,
                    darkest_secret;
};

class PhoneBook
{
    private:
        class Contact contacts[8];
        int index;
        int inc;
        void    print_string(std::string a);
    public:
        PhoneBook();
        void    add_contact(void);
        void    show_contacts(void);
};

#endif