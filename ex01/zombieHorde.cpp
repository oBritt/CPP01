
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* ptrZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		ptrZombie[i].setName(name);
	return (ptrZombie);
}