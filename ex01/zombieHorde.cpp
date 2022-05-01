#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name )
{
	Zombie *zombies;

	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}