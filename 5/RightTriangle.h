#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:
	RightTriangle():Triangle() {}

	RightTriangle(double a, double b) :Triangle(a, b, 90) {}

	virtual double Square() override
	{
		double square = 0.5 * a * b;
		return square;
	}

	virtual double Perimetr() override
	{
		double c = sqrt(a * a + b * b);
		return a + b + c;
	}
};
