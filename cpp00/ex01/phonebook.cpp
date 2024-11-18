#include "iostream"

int	main(void)
{

    std::string input;
    std::cout << "Welcome to the Phonebook!" << std::endl;
    std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
    
    while (std::getline(std::cin, input))
    {
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            std::cout << "Adding a new contact..." << std::endl;
        else if (input == "SEARCH")
            std::cout << "Searching contacts..." << std::endl;
        else
            std::cout << "Invalid command!" << std::endl;
            
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}

