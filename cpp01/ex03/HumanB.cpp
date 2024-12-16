#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)    //constructor
{
    this->name = name;
    this->weapon = NULL;            //initialize weapon
}

void HumanB::setWeapon(Weapon &weapon)          //instead of void setWeapon(x), we do HumanA::setWeapon, 
                                                //telling the compiler that this is the function that we declared in humanA.hpp
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name <<" has no weapon " << std::endl;
}
