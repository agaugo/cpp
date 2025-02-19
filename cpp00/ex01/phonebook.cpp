#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "phonebook.hpp"

int addContact(PhoneBook& phonebook)
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    do {
        std::cout << "Enter first name: ";
        std::getline(std::cin, firstName);
        if (firstName.empty()) {
            std::cout << "First name cannot be empty. Please try again.\n";
        }
    } while (firstName.empty());

    do {
        std::cout << "Enter last name: ";
        std::getline(std::cin, lastName);
        if (lastName.empty()) {
            std::cout << "Last name cannot be empty. Please try again.\n";
        }
    } while (lastName.empty());

    do {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nickname);
        if (nickname.empty()) {
            std::cout << "Nickname cannot be empty. Please try again.\n";
        }
    } while (nickname.empty());

    do {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, phoneNumber);
        if (phoneNumber.empty()) {
            std::cout << "Phone number cannot be empty. Please try again.\n";
        }
    } while (phoneNumber.empty());

    do {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, darkestSecret);
        if (darkestSecret.empty()) {
            std::cout << "Darkest secret cannot be empty. Please try again.\n";
        }
    } while (darkestSecret.empty());

    Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    phonebook.addContact(newContact);

    return (1);
}

int searchPhonebook(PhoneBook& phonebook)
{
    std::string input;
    std::size_t index;

    phonebook.displayContacts();
    std::cout << "Enter index for user to be displayed: ";
    std::getline(std::cin, input);

    std::stringstream(input) >> index;
    if (index < 1 || index > phonebook.getTotal()) { // CHANGE: Use getter
        std::cout << "Invalid index. Enter a number between 1 and " << phonebook.getTotal() << "\n";
        return (-1);
    }
    const Contact& contact = phonebook.getContact(index - 1); // CHANGE: Use getter
    std::cout
        << "First Name: " << contact.getFirstName() << "\n"    // CHANGE: Use getters
        << "Last Name: " << contact.getLastName() << "\n"
        << "Nickname: " << contact.getNickname() << "\n"
        << "Phone Number: " << contact.getPhoneNumber() << "\n"
        << "Darkest Secret: " << contact.getDarkestSecret() << "\n";
            
    return (0);
}

int	main(void)
{
    PhoneBook phonebook;

    std::string input;
    std::cout << "Welcome to the Phonebook!" << std::endl;
    std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
    
    while (true)
    {
        std::getline(std::cin, input);

        if (std::cin.fail()) {
            std::cout << "\nExiting Program.\n";
            break ;
        }

        if (input == "EXIT")
            break;
        else if (input == "ADD")
            addContact(phonebook);
        else if (input == "SEARCH")
            searchPhonebook(phonebook);
        else
            std::cout << "Invalid command!" << std::endl;
            
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
