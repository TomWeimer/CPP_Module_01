#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
using namespace std;
class Zombie
{
	private:
	string name;
	public:
	void announce( void );
	Zombie(string name);
	~Zombie();
};

class RandomName
{
	private:
	string firstName[13];
	string lastname	[17];
	void setFirstNames(void);
	void setLastNames(void);
	public:
	
};

Zombie* newZombie(string name);
//static string getName(void);
void randomChump( std::string name );
# endif