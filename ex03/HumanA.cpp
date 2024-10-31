#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "Human A created." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A destroyed." << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
