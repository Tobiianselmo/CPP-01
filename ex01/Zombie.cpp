#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie default constructor called." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie default destructor called." << std::endl;
}

void Zombie::nameZombie(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
