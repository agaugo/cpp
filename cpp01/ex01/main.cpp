#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void)
{
    int N = 20;

    Zombie* horde = zombieHorde(N, "Zombie ");
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
    delete[]  horde;
    return (0);
}
