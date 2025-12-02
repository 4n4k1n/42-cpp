#pragma once
#include <iostream>

class Fixed
{
	private:
		int                 _fixed_point_value;
		static const int    _fractional_bits = 8;

	public:
		Fixed();
		Fixed(const int fix_int);
		Fixed(const float fix_float);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int		toInt() const;
		float	getFloatPart(void) const;
		int		getIntPart(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
