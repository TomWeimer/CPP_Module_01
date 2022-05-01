# include "HumanB.hpp"

HumanB::HumanB(string name)
{
	name_ = name;
	weapon_ = NULL;
}

HumanB::HumanB(string name, Weapon weapon)
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
		cout << this->name_ << "attacks with their " << "fists!" << endl;
	else
		cout << this->name_ << "attacks with their " << weapon_->getType() << endl;
}

