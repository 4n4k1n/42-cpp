#include "Fixed.hpp"
#include "color.hpp"
#include <cmath>

Fixed::Fixed() : _fixed_point_value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int fix_int) : _fixed_point_value(fix_int << _fractional_bits)
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float fix_float) : _fixed_point_value(static_cast<int>(roundf(fix_float * (1 << _fractional_bits))))
{
	std::cout << GREEN << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
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
float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixed_point_value) / (1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->_fixed_point_value >> this->_fractional_bits);
}

float	Fixed::getFloatPart(void) const
{
	return (_fixed_point_value & (_fractional_bits << _fractional_bits));
}

int		Fixed::getIntPart(void) const
{
	return (_fixed_point_value >> _fractional_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
