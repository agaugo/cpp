#include "iostream"
#include "vector"
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    public:

    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
    : firstName(fn), lastName(ln), nickname(nn), phoneNumber(pn), darkestSecret(ds) {}
};


class PhoneBook
{
    public:
    
    std::vector <Contact> contacts;

    void addContact(const Contact& newContact) {
        if (contacts.size() >= 8)
            contacts[0] = newContact;
        else
            contacts.push_back(newContact);
    }

    void displayContacts()
    {
        if (contacts.empty()) {
            std::cout << "Phonebook is empty. \n";
            return ;
        }

        std::cout << "PHONEBOOK:\n";
        std::cout << "     index|first name| last name|  nickname\n";

        for (size_t i = 0; i < contacts.size(); ++i)
        {
            const Contact& contact = contacts[i];
            std::cout
                << std::setw(10) << std::right << i + 1 << "|"
                << std::setw(10) << std::right << contact.firstName.substr(0,9) << "|"
                << std::setw(10) << std::right << contact.lastName.substr(0,9) << "|"
                << std::setw(10) << std::right << contact.nickname.substr(0,9) << "\n";
        }
    }
};