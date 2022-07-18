# include "Harl.hpp"

void Harl::complain(std::string level)
{
	void (Harl::*functions[4])(void);
	
	std::string			complaints[4];


	functions[0] = &Harl::error;
	functions[1] = &Harl::warning;
	functions[2] = &Harl::info;
	functions[3] = &Harl::debug;

	complaints[0] = "ERROR";
	complaints[1] = "WARNING";
	complaints[2] = "INFO";
	complaints[3] = "DEBUG";

	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			return (this->*functions[i])();
	}
	std::cout << "I AM NOT COMPLAINING !" << std::endl;
	return ;

}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::warning( void ) 
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::info( void ) 
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::debug( void ) 
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}