
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "violence.hpp"

class Weapon{
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType(void) const;
	void setType(std::string type);
};

#endif