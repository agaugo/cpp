#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon* weapon;                     //Pointer to Weapon class (not reference)
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
    }

#endif