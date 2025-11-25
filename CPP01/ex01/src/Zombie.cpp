#include "Zombie.hpp"
#include "color.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::Zombie() : _name("Zombie") {}

void	Zombie::setName(const std::string &name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	if (_name == "Foo")
		std::cout << RED << "Foo: BraiiiiiiinnnzzzZ..." << RESET << std::endl;
	else
		std::cout << RED << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
