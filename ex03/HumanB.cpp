
#include "violence.hpp"


HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " was deconstructed"  << std::endl;
	return;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon* weapon)
{
	this->weapon = weapon;
}