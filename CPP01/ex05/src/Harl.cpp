#include "Harl.hpp"
#include "color.hpp"
#include <iostream>

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
	{
        if (_levels[i] == level)
		{
            (this->*_funcs[i])();
            return;
        }
    }
	std::cerr << RED << "Unknown level!" << RESET << std::endl;
}

void	Harl::debug(void)
{
	std::cout << YELLOW << MSG_DEBUG << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << MSG_INFO << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << MSG_WARNING << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << YELLOW << MSG_ERROR << RESET << std::endl;
}
