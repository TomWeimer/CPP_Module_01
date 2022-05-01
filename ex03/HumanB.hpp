#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
using namespace std;
#include "Weapon.hpp"

class HumanB
{
	private:
	string name_;
	Weapon *weapon_;

	public:
	void attack(void)const;
	HumanB(string name, Weapon weapon);
	HumanB(string name);
	void setType(Weapon& weapon);
};

# endif