#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
	std::string name;
	public:
	
	Zombie();

	Zombie(std::string name);

	~Zombie();

	void setName(std::string name);
	
	std::string getName(void) const;
	
	void announce( void ) const;

	
};

Zombie* zombieHorde( int N, std::string name );
# endif