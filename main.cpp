/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#include "header.h"
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"


namespace variables
{
	int index;

}

int main()
{
	Triangle tri; // instance of Triangle object
	Square   sqr; // instance of Square object;

	tri.SetSide(-1.0, 24.0, 26.0);
	tri.CalcPerimeter();
	tri.printPerimeter();
	tri.CalcArea();
	tri.printArea();

	std::cout << std::endl;

	sqr.SetSide(-1.0, 0, 0);
	sqr.CalcPerimeter();
	sqr.printPerimeter();
	sqr.CalcArea();
	sqr.printArea();

	return 0;
}
