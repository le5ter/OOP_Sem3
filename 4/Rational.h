#pragma once
#include "Pair.h"

using namespace std;

class Rational : public Pair
{
public:
	Rational();
	Rational(int a, int b);
	void print();
	Rational operator+(const Rational& obj);
	Rational operator/(const Rational& obj);
	Rational operator-(const Rational& obj);
};
