# ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
using namespace std;

class Weapon
{
	private:
	string type_;
	public:
	string getType(void)const;
	void  setType(string newType);
	Weapon(string weaponType);
};
# endif
