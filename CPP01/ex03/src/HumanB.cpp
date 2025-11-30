#include "HumanB.hpp"
#include <iostream>
#include "color.hpp"

HumanB::HumanB(const std::string &name) : _name(name) {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << RED << _name << GREEN << " attacks with their " << RED << _weapon->getType() << RESET << std::endl;
}
