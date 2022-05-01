#include "Zombie.hpp"
Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	cout << name << " is destroyed !" << endl;
}

void Zombie::announce(void)
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}
