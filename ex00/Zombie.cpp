

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){
	std::cout << "Zombie " << name << " born " << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " died " << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}