#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

static int levelToInt(std::string level)
{
	std::string lvls[4] = {"DEBUG",
							"INFO",
							"WARNING",
							"ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == lvls[i])
			return i;
	}
	return -1;
}

void Harl::complain(std::string level)
{
	void (Harl::*functPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int expression = levelToInt(level);
	switch (expression)
	{
		case 0:
		{
			(this->*functPtr[0])();
			std::cout << std::endl;
		}
		case 1:
		{
			(this->*functPtr[1])();
			std::cout << std::endl;
		}
		case 2:
		{
			(this->*functPtr[2])();
			std::cout << std::endl;
		}
		case 3:
		{
			(this->*functPtr[3])();
			std::cout << std::endl;
			break;
		}
		default:
			std::cout << "Error: Write a correct level: DEBUG | INFO | WARNING | ERROR" << std::endl;
	}	
}


void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}