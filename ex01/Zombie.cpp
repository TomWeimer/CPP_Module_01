#include "Zombie.hpp"
Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::Zombie(string name)
{
	this->name = name;
}

void Zombie::setName(string name)
{
	this->name = name;
}
string Zombie::getName(void)const
{
	return (this->name);
}

void Zombie::announce(void) const
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie(void)
{
	cout << name << " is destroyed !" << endl;
}
