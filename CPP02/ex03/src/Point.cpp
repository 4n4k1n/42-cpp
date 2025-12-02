#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other)
{
	*this = other;
}

Point	&Point::operator=(const Point &other)
{
	static_cast<void>(other);
	return (*this);
}
