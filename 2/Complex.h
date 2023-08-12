#pragma once
#include <iostream>

class Complex
{
private:
	double* a;
	double* b;
public:
	Complex();
	Complex(double a, double b);
	Complex(const Complex& obj);
	~Complex();

	Complex operator+(const Complex& obj);
	Complex operator-(const Complex& obj);
	Complex operator*(const Complex& obj);
	Complex operator/(const Complex& obj);

	Complex& operator=(const Complex& obj);

	friend std::ostream& operator << (std::ostream&, const Complex&);
	friend std::istream& operator >> (std::istream&, Complex&);

	void getAB() {
		std::cout << *(a) << ", " << *(b) << std::endl;
	}

};


