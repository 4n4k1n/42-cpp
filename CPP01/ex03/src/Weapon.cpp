#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}
