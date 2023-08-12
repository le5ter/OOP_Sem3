#pragma once
#include <cmath>
#include "Triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle():Triangle(5, 5, 45) {}

	IsoscelesTriangle(double a, double angle) :Triangle(a, a, angle) {}

	virtual double Square() override
	{
		double square = 0.5 * a * b * sin(angle * pi / 180);
		return square;
	}

	virtual double Perimetr() override
	{
		double c = sqrt(a*a + b*b - 2 * a * b * cos(angle * pi / 180));
		return a + b + c;
	}
};

