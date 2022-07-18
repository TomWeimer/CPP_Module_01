#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	type_ = weaponType;
}

void Weapon::setType(std::string newType)
{
	type_ = newType;
}

std::string Weapon::getType(void)const
{
	
	return (type_);
}