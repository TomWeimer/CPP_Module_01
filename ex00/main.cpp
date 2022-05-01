#include "Zombie.hpp"
static string getName(void)
{
	static int n = 1;
	int nb;
	size_t size;
	string name;

	nb = n;
	name = "Zombie";
	size = name.length();
	do {
		name.insert(size, 1, (nb % 10) + '0');
     	nb /= 10;
		
	} while (nb);
	n++;
	return (name);
}

int main()
{
	Zombie *zombie;
	
	randomChump(getName());
	zombie = newZombie(getName());
	delete (zombie);
}