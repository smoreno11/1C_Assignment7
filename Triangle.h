/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"
#include "Math.h"  // sqrt & pow functions

class Triangle : public Shape
{
public:
	Triangle();
	~Triangle();
	void SetSide(double a, double, double c);
	double CalcPerimeter();
	double CalcArea();
	void printPerimeter();
	void printArea();

private:
	double side1;	   // CALC & OUT - Holds the value of the first side
	double side2;      // CALC & OUT - Holds the value of the second side
	double side3;      // CALC & OUT - Holds the value of the third side
	double tPerimeter; // CALC & OUT - Holds the value of the perimeter
	double tArea;      // CALC & OUT - Holds the value of the area
	double bSqrt;      // CALC - The value before it is square rooted
	double tempPerimeter; // CALC - The temp perimeter used to find the square root value


};

#endif /* TRIANGLE_H_ */
