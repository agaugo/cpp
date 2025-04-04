#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string name;
    
    public:
        Zombie();
        Zombie(std::string name);                       // Constructor declaration
        ~Zombie();                                      // Destructor declaration

        void setName(const std::string& name);          // Function to generate a name for each new Zombie
        void announce(void);                            // Member function declaration
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif