#include <string>
#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) : type(weaponType) {}

//  Constructor for the Weapon class indicated by ::
//  Constructor takes a parameter of const std::string&, constant reference to a string, 
//  the reference is essentially a trick to avoid copying the variable for effiency
//  The left-hand type refers to the member variable (Weapon::type), while the right-hand type is the constructor’s parameter.
//  The empty {} indicates that it there is no additional code

void Weapon::setType(const std::string& type) {
    this->type = type;
}

//  this->type , i dont know whats going on here.

const std::string& Weapon::getType() const{
    return type;
};

//  
