/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#ifndef SHAPE_H_
#define SHAPE_H_
#include "header.h"

class Shape
{
public:

	//These are two pure virtual functions
	virtual void SetSide(double a, double, double c) = 0;
	virtual double CalcPerimeter() = 0;
	virtual double CalcArea() = 0;
	virtual void printPerimeter() = 0;
	virtual void printArea() = 0;

};

#endif /* SHAPE_H_ */
