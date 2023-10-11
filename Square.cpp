#include "Square.h"

Square::Square()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
}

Square::~Square()
{

}

void Square::SetSide(double a, double b, double c)
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
		std::cout << "The side for the Square is below 0" << std::endl;
		std::cout << "Exception thrown. Enter a number above 0: ";
		std::cin >> side1;
	}
}

double Square::CalcPerimeter()
{
	
	return sPerimeter = 4 * side1;
}

double Square::CalcArea()
{
	
	return sArea = pow(side1, 2);
}

void Square::printPerimeter()
{
	std::cout << "Perimeter of the square is " << std::fixed
		<< std::setprecision(2) << Square::sPerimeter << std::endl;
}

void Square::printArea()
{
	std::cout << "The area of the square is " << std::fixed
		<< std::setprecision(2) << Square::sArea << std::endl;
}