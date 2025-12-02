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

bool	Fixed::operator<(const Fixed &fixed) const{
	return (_fixed_point_value < fixed.getRawBits());
}

bool	Fixed::operator>(const Fixed &fixed) const{
	return (_fixed_point_value > fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const{
	return (_fixed_point_value <= fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const{
	return (_fixed_point_value >= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const{
	return (_fixed_point_value == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const{
	return (_fixed_point_value != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed	ret;
	ret.setRawBits(_fixed_point_value + fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed	ret;
	ret.setRawBits(_fixed_point_value - fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed	ret;
	ret.setRawBits((_fixed_point_value * fixed.getRawBits()) >> _fractional_bits);
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	Fixed	ret;
	if (fixed.getRawBits() == 0)
		throw std::invalid_argument("Division by zero");
	ret.setRawBits((_fixed_point_value << _fractional_bits) / fixed.getRawBits());
	return (ret);
}

Fixed	&Fixed::operator++(void)
{
	_fixed_point_value++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	_fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret(*this);
	operator++();
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret(*this);
	operator--();
	return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
