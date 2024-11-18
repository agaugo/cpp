#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void) {
    Zombie* zombie = newZombie("Glarnb");
    zombie->announce();
    delete zombie;

    return (0);
}
