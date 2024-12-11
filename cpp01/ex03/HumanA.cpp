#include <HumanA.hpp>

//attack
void HumanA::setType(Weapon &weapon)          //instead of void setWeapon(x), we do HumanA::setWeapon, 
                                                //telling the compiler that this is the function that we declared in humanA.hpp
{
    this->weapon = weapon;
}

void HumanA::attack()
{

}
