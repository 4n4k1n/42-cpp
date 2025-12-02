#include "Fixed.hpp"
#include "color.hpp"

Fixed::Fixed() : _fixed_point_value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = other;
}
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		this->_fixed_point_value = other.getRawBits();
	return (*this);
}
Fixed::~Fixed()
{
	std::cout << YELLOW << "Destructor called" << RESET << std::endl;
}
int Fixed::getRawBits() const
{
	std::cout << MAGENTA << "getRawBits member function called" << RESET << std::endl;
	return (this->_fixed_point_value);
}
void Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
}
