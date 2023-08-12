#include "Complex.h"

Complex::Complex()
{
	a = new double(0);
	b = new double(0);
}

Complex::Complex(double a, double b)
{
	this->a = new double(a);
	this->b = new double(b);
}

Complex::Complex(const Complex& obj)
{
	a = new double(*obj.a);
	b = new double(*obj.b);
}

Complex::~Complex()
{
	a = nullptr;
	b = nullptr;	
}

Complex Complex::operator+(const Complex& obj)
{
	Complex C;
	*C.a = *(a)+(*obj.a);
	*C.b = *(b)+(*obj.b);

	return C;
}

Complex Complex::operator-(const Complex& obj)
{
	Complex C;
	*C.a = *(a)-(*obj.a);
	*C.b = *(b)-(*obj.b);

	return C;
}

Complex Complex::operator*(const Complex& obj)
{
	Complex C;
	*C.a = *(a) * (*obj.a) - *(b) * (*obj.b);
	*C.b = *(a) * (*obj.b) + *(b) * (*obj.a);

	return C;
}

Complex Complex::operator/(const Complex& obj)
{
	Complex C;
	double r = (*obj.a) * (*obj.a) + (*obj.b) * (*obj.b);
	*C.a = ((*(a) * (*obj.a)) + (*(b) * (*obj.b))) / r;
	*C.b = ((*(b) * (*obj.a)) - (*(a) * (*obj.b))) / r;

	return C;

}

Complex& Complex::operator=(const Complex& obj)
{

	a = obj.a;
	b = obj.b;

	return *this;
}

std::ostream& operator << (std::ostream& out, const Complex& obj)
{
	out << "(" << *(obj.a) << ", " << *(obj.b) << ")" << std::endl;
	return out;
}

std::istream& operator >> (std::istream& in, Complex& obj)
{
	in >> *(obj.a) >> *(obj.b);
	return in;
}