#include "Weapon.hpp"

Weapon::Weapon(string weaponType)
{
	type_ = weaponType;
}

void Weapon::setType(string newType)
{
	type_ = newType;
}

string Weapon::getType(void)const
{
	
	return (type_);
}