#include "Zombie.hpp"

int main()
{
	Zombie* zombie = newZombie("Neitor");
	zombie->announce();
	delete zombie;
	randomChump("Peter");
	return 0;
}
