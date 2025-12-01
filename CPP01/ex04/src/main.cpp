#include "Sed.hpp"
#include "color.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << RED << "Invalid arguments!" << RESET << std::endl;
		return (1);
	}
	Sed	sed(av[1], av[2], av[3]);
	return (sed.replace() == false);
}
