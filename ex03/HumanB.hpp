#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name_;
	Weapon *weapon_;

	public:
	void attack(void)const;
	HumanB(std::string name, Weapon weapon);
	HumanB(std::string name);
	void setType(Weapon& weapon);
};

# endif