#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <sstream>

std::string ft_itos(int x){
	std::stringstream ss;
	ss << x;
	return ss.str();
}

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0) return NULL;

	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		horde[i].setName(name + ft_itos(i + 1));
		horde[i].announce();
	}

	return (horde);
}
