#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie *horde = new Zombie[N];
		for (int i = 0; i < N; i++)
			horde[i].nameZombie(name);
		return horde;
	}
	std::cout << "You can't create an Horde with a negative or zero size." << std::endl;
	return NULL;
}
