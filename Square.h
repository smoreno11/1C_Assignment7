/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"
#include "Math.h"   // math functions like sqrt & pow

class Square : public Shape
{
public:
	Square();
	~Square();
	void SetSide(double a, double, double c);
	double CalcPerimeter();
	double CalcArea();
	void printPerimeter();
	void printArea();

private:
	double side1;      // CALC & OUT - Holds the value of the first side
	double side2;	   // CALC & OUT - Holds the value of the second side
	double side3;	   // CALC & OUT - Holds the value of the third side
	double sPerimeter; // CALC & OUT - Holds the value of the perimeter
	double sArea;	   // CALC & OUT - Holds the value of the area
};

#endif /* SQUARE_H_ */
