#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string name;
    
    public:
        void announce(void);            // Member function declaration
        Zombie(std::string name);       // Constructor declaration
        ~Zombie();                      // Destructor declaration
};

Zombie* newZombie(std::string name);

#endif