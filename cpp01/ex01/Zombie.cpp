#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << name << " has been decapitated.\n";
}

void Zombie::setName(const std::string& newName) {
    name = newName;    
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
