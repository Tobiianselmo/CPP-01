#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie default constructor called." << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie name constructor called." << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " deleted with default destructor." << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
