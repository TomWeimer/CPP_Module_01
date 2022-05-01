#ifndef HARL_H
# define HARL_H

#include <iostream>
using namespace std;

class Harl
{
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public:
	void complain(string level );
};

# endif