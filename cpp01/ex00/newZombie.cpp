#include "Zombie.hpp"
#include <string>
#include <iostream>

//permanent

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
