#include "iostream"
#include "vector"
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
    Contact() {}

    Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
        : firstName(fn), lastName(ln), nickname(nn), phoneNumber(pn), darkestSecret(ds) {}

    std::string getFirstName() const { return firstName; }
    std::string getLastName() const {return lastName; }
    std::string getNickname() const {return nickname; }
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getDarkestSecret() const {return darkestSecret; }
};


class PhoneBook
{
    private:
        Contact contacts[8];
        int currentIndex;
        int totalContacts;

    public:
        PhoneBook() : currentIndex(0), totalContacts(0) {}

        void addContact(const Contact& newContact)
        {
            contacts[currentIndex] = newContact;
            currentIndex = (currentIndex + 1) % 8; // >> changes the first one
            if (totalContacts < 8)
                totalContacts++;
        }
    
        void displayContacts()
        {
            if (totalContacts == 0) {
                std::cout << "Phonebook is empty.\n";
                return;
            }
            std::cout << std::setw(10) << std::right << "index" << "|"
                << std::setw(10) << std::right << "first name" << "|"
                << std::setw(10) << std::right << "last name" << "|"
                << std::setw(10) << std::right << "nickname" << "\n";
            std::cout << std::string(44, '-') << std::endl;
            for (int i = 0; i < totalContacts; ++i) {
            std::string fname = contacts[i].getFirstName();
            std::string lname = contacts[i].getLastName();
            std::string nname = contacts[i].getNickname();

            if (fname.length() > 10)
                fname = fname.substr(0, 9) + ".";
            if (lname.length() > 10)
                lname = lname.substr(0, 9) + ".";
            if (nname.length() > 10)
                nname = nname.substr(0, 9) + ".";

            std::cout << std::setw(10) << std::right << i + 1 << "|"
                << std::setw(10) << std::right << fname << "|"
                << std::setw(10) << std::right << lname << "|"
                << std::setw(10) << std::right << nname << std::endl;
            }
        }
    const Contact& getContact(int index) const {
        return contacts[index];
    }

    size_t getTotal() const { return totalContacts; } // CHANGE: Added getter
};