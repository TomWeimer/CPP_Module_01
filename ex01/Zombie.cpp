#include "Zombie.hpp"
Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
std::string Zombie::getName(void)const
{
	return (this->name);
}

void Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed !" << std::endl;
}
