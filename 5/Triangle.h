#pragma once
#include <iostream>

using namespace std;

const double pi = 3.14159265358979323846;

class Triangle
{
protected:
	double a, b, angle;
public:
	Triangle()
	{
		a = 3;
		b = 4;
		angle = 90;
	}
	Triangle(double a, double b, double angle) : a(a), b(b), angle(angle) {}
	virtual double Square() = 0;
	virtual double Perimetr() = 0;
	void print() 
	{	
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "angle = " << angle << endl;
	}
};

