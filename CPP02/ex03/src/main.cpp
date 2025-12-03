#include "Fixed.hpp"
#include "Point.hpp"
#include "color.hpp"
#include <iostream>

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float d1 = (b.getX().toFloat() - a.getX().toFloat()) * 
		(point.getY().toFloat() - a.getY().toFloat()) - 
		(b.getY().toFloat() - a.getY().toFloat()) * 
		(point.getX().toFloat() - a.getX().toFloat());
	float d2 = (c.getX().toFloat() - b.getX().toFloat()) *
		(point.getY().toFloat() - b.getY().toFloat()) -
		(c.getY().toFloat() - b.getY().toFloat()) *
		(point.getX().toFloat() - b.getX().toFloat());
	float d3 = (a.getX().toFloat() - c.getX().toFloat()) * 
		(point.getY().toFloat() - c.getY().toFloat()) - 
		(a.getY().toFloat() - c.getY().toFloat()) * 
		(point.getX().toFloat() - c.getX().toFloat());

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	bool has_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

	if (has_zero)
		return (false);
	return !(has_neg && has_pos);
}

static void printResult(const char *description, bool result)
{
	std::cout << description << ": ";
	if (result)
		std::cout << GREEN << "Inside" << RESET << std::endl;
	else
		std::cout << RED << "Outside" << RESET << std::endl;
}

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);

	std::cout << "\n=== Triangle vertices ===" << std::endl;
	std::cout << "A: (0, 0)" << std::endl;
	std::cout << "B: (10, 0)" << std::endl;
	std::cout << "C: (5, 10)" << std::endl;

	std::cout << "\n=== Test 1: Point clearly inside ===" << std::endl;
	Point p1(5.0f, 5.0f);
	printResult("Point (5, 5)", bsp(a, b, c, p1));

	std::cout << "\n=== Test 2: Point clearly outside ===" << std::endl;
	Point p2(15.0f, 5.0f);
	printResult("Point (15, 5)", bsp(a, b, c, p2));

	std::cout << "\n=== Test 3: Point on vertex (should be outside) ===" << std::endl;
	Point p3(0.0f, 0.0f);
	printResult("Point (0, 0) - vertex A", bsp(a, b, c, p3));

	std::cout << "\n=== Test 4: Point on edge (should be outside) ===" << std::endl;
	Point p4(5.0f, 0.0f);
	printResult("Point (5, 0) - on edge AB", bsp(a, b, c, p4));

	std::cout << "\n=== Test 5: Point just inside ===" << std::endl;
	Point p5(5.0f, 1.0f);
	printResult("Point (5, 1)", bsp(a, b, c, p5));

	std::cout << "\n=== Test 6: Another point clearly outside ===" << std::endl;
	Point p6(0.0f, 15.0f);
	printResult("Point (0, 15)", bsp(a, b, c, p6));

	std::cout << "\n=== Test 7: Point outside below triangle ===" << std::endl;
	Point p7(5.0f, -1.0f);
	printResult("Point (5, -1)", bsp(a, b, c, p7));

	std::cout << "\n=== Test 8: Point near center ===" << std::endl;
	Point p8(5.0f, 3.0f);
	printResult("Point (5, 3)", bsp(a, b, c, p8));

	return 0;
}
