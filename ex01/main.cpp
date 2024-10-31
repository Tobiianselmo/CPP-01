#include "Zombie.hpp"

int main()
{
	int n = 4;
	Zombie *horde = zombieHorde(n, "Neitor");
	if (!horde)
		return 1;
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
