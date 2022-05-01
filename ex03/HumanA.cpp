# include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& weapon):weapon_(weapon)
{
	name_ = name;
}

void HumanA::setType(string newType)
{
	weapon_.setType(newType);
}

void HumanA::attack(void)const
{
	cout << this->name_ << "attacks with their " << this->weapon_.getType() << endl;
}