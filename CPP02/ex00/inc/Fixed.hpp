#pragma once
#include <iostream>

class Fixed
{
	private:
		int                 _fixed_point_value;
		static const int    _fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
};
