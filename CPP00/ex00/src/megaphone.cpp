#include <iostream>
#include <string.h>

int	main(int ac, char **av)
{
	std::string str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		str = av[i];
		for (char  &c: str)
			c = toupper(c);
		std::cout << str << " " << std::flush;
	}
	std::cout << "\n" << std::flush;
	return (0);
}
