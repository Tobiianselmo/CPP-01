#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "Human B created." << std::endl;
}

HumanB::HumanB(std::string name) :  name(name), weapon(NULL)
{
	std::cout << "Human B created." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B destroyed." << std::endl;
}


void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " has not any weapon to attack." << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
