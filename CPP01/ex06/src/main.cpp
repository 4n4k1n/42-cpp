#include "Harl.hpp"
#include "color.hpp"
#include <iostream>

int main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cerr << RED << "Usage: " << av[0] << " <log level>" << RESET << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
