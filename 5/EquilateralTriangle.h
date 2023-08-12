#pragma once
#include "Triangle.h"
class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle():Triangle(5, 5, 60) {}

	EquilateralTriangle(double a) :Triangle(a, a, 60) {}

	virtual double Square() override
	{
		double square = sqrt(3)/4*a*a;
		return square;
	}

	virtual double Perimetr() override
	{
		return 3*a;
	}
};

