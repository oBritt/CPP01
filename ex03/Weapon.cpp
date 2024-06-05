

#include "violence.hpp"


Weapon::Weapon(std::string type): type(type)
{
	return;
}

Weapon::~Weapon(void){
	std::cout << this->type << " was deconstructed"  << std::endl;
	return;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType(void) const
{
	return this->type;
}