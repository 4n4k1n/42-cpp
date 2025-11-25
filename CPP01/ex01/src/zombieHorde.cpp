#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *new_zombies = new Zombie[N];
	if (!new_zombies)
	{
		std::cerr << "Allocation failed!" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		new_zombies[i].setName(name);
	return (new_zombies);
}
