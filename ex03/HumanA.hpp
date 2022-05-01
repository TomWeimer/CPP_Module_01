#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
using namespace std;
#include "Weapon.hpp"

class HumanA
{
	private:
	string name_;
	Weapon& weapon_;

	public:
	void attack(void)const;
	string getType(void)const;
	HumanA(string name, Weapon& weapon);
	void  setType(string newType);

};
#endif