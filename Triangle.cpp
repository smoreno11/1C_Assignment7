#include "Triangle.h"

Triangle::Triangle()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
}

Triangle::~Triangle()
{

}


void Triangle::SetSide(double a, double b, double c)
{
	side1 = a;
	side2 = b;
	side3 = c;
	try
	{
		if (side1 < 0)
			throw side1;
	}
	catch (double e)
	{
		std::cout << "The side for the Triangle is below 0" << std::endl;
		std::cout << "Exception thrown. Enter a number above 0: ";
		std::cin >> side1;
	}
}

double Triangle::CalcPerimeter()
{
	return tPerimeter = side1 + side2 + side3;
}

double Triangle::CalcArea()
{
	/*
	This is where the assert macros were tested.	
	*/
	//assert(side1 < 0);
	//assert(b > 0);
	tempPerimeter = tPerimeter / 2.0;
	bSqrt = tempPerimeter * (tempPerimeter - side1) * (tempPerimeter - side2) * (tempPerimeter - side3);

	return tArea = sqrt(bSqrt);
}

void Triangle::printPerimeter()
{
	std::cout << "Perimeter of the square is " << std::fixed
		<< std::setprecision(2) << Triangle::tPerimeter << std::endl;
}

void Triangle::printArea()
{
	std::cout << "The area of the square is " << std::fixed
		<< std::setprecision(2) << Triangle::tArea << std::endl;
}