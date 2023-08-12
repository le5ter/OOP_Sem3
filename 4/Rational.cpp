#include "Rational.h"

Rational::Rational():Pair(1, 1) {}

Rational::Rational(int a, int b):Pair(a, b) {}

void Rational::print()
{
	cout << a << "/" << b << endl;
}

Rational Rational::operator+(const Rational& obj)
{
	Rational tmp;
	tmp.a = a * obj.b + b*obj.a;
	tmp.b = b * obj.b;
	return tmp;
}

Rational Rational::operator/(const Rational& obj)
{
	Rational tmp;
	tmp.a = a * obj.b;
	tmp.b = b * obj.a;
	return tmp;
}

Rational Rational::operator-(const Rational& obj)
{
	Rational tmp;
	tmp.a = a * obj.b - b * obj.a;
	tmp.b = b * obj.b;
	return tmp;
}

