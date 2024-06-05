

#include "Zombie.hpp"

int	main(void)
{
	Zombie bro("Bro");
	randomChump("Zitraks");
	bro.announce();
	Zombie *ptr;
	ptr = newZombie("I am pointer");
	ptr->announce();
	delete ptr;
}