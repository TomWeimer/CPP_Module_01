# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):weapon_(weapon)
{
	name_ = name;
}

void HumanA::setType(std::string newType)
{
	weapon_.setType(newType);
}

void HumanA::attack(void)const
{
	std::cout << this->name_ << "attacks with their " << this->weapon_.getType() << std::endl;
}