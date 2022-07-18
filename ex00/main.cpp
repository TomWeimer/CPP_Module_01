#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	
	randomChump("Zombie1");
	zombie = newZombie("Zombie2");
	delete (zombie);
}