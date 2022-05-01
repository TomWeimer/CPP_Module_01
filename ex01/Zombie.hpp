#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
using namespace std;

class Zombie
{
	private:
	string name;
	public:
	
	Zombie();

	Zombie(string name);

	~Zombie();

	void setName(string name);
	
	string getName(void) const;
	
	void announce( void ) const;

	
};

Zombie* zombieHorde( int N, string name );
# endif