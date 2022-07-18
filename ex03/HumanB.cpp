# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	name_ = name;
	weapon_ = NULL;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	name_ = name;
	weapon_ = &weapon;
}


void HumanB::setType(Weapon& weapon)
{
	this->weapon_ = &weapon;
}

void HumanB::attack(void)const
{
	if (this->weapon_ == NULL)
		std::cout << this->name_ << "attacks with their " << "fists!" << std::endl;
	else
		std::cout << this->name_ << "attacks with their " << weapon_->getType() << std::endl;
}

