#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <iostream>

class Weapon {                                          //  Declaring Class named Weapon
    private:                                            //  Access specifier is private. Meaning it is only accessible within the class itself
        std::string type;                               //  a std::string named type, which can not be modified directly from outside of the class
    
    public:                                             //  Access specifier is public. Members declared below are accesible from outside of the class.
        Weapon(const std::string& type);                //  Declares a CONSTRUCTOR that takes initializes the attriibute type when a Weapon is created
        void setType(const std::string& type);          //  Declares a member function called setType that takes a const std::string& as a parameter
        const std::string& getType() const;             //  declares a function called getType that returns a const std::string&
};

#endif