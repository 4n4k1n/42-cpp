#include "HumanA.hpp"
#include <iostream>
#include "color.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(&weapon) {}

void	HumanA::attack(void)
{
	std::cout << RED << _name << GREEN << " attacks with their " << RED << _weapon->getType() << RESET << std::endl;
}
