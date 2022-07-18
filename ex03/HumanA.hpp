#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string name_;
	Weapon& weapon_;

	public:
	void attack(void)const;
	std::string getType(void)const;
	HumanA(std::string name, Weapon& weapon);
	void  setType(std::string newType);

};
#endif