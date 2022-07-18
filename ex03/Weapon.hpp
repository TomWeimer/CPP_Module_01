# ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
	std::string type_;
	public:
	std::string getType(void)const;
	void  setType(std::string newType);
	Weapon(std::string weaponType);
};
# endif
