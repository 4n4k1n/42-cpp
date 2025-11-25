#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name) : _name(name) {}

void	Zombie::announce(void)
{
	if (_name == "Foo")
		std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}
