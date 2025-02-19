#include <string>
#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) : type(weaponType) {}


void Weapon::setType(const std::string& type) {
    this->type = type;
}

const std::string& Weapon::getType() const{
    return type;
};

