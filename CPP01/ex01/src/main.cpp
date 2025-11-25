#include "Zombie.hpp"
#include <iostream>

static void	announce_horde(int size, Zombie *horde)
{
	for (int i = 0; i < size; i++)
		horde[i].announce();
}

int	main(int ac, char **av)
{
	Zombie *new_zombies;
	int	horde_size = 4;

	if (ac > 2)
	{
		std::cerr << "To many args!" << std::endl;
		return (1);
	}
	new_zombies = zombieHorde(horde_size, ac == 1 ? "Foo" : av[1]);
	if (!new_zombies)
		return (1);
	announce_horde(horde_size, new_zombies);
	delete[] new_zombies;
	return (0);
}
