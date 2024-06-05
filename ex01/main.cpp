

#include "Zombie.hpp"

int	main(void)
{
	int	amount = 10;
	Zombie* ptr;
	ptr = zombieHorde(amount, "GigaSuperMan");
	for (int i = 0; i < amount; i++)
	{
		ptr[i].announce();
	}
	delete [] ptr;
}