#include "Pair.h"

using namespace std;

Pair::Pair() : a(0), b(0) {}

Pair::Pair(int a, int b)
{
	this->a = a;
	this->b = b;
}

Pair::~Pair()
{

}

int Pair::get_a() const
{
	return a;
}

int Pair::get_b() const
{
	return b;
}

void Pair::print()
{
	cout << a << " " << b << endl;
}

//void Pair::print(string str)
//{
//	if (str == "/")
//	{
//		cout << a << "/" << b << endl;
//	}
//}

Pair::Pair(const Pair& obj)
{
	a = obj.a;
	b = obj.b;
}

bool Pair::operator==(const Pair& B)
{
	return a == B.get_a() && b == B.get_b();
}

bool Pair::operator!=(const Pair& B)
{
	bool flag = false;
	if (a == B.get_a() && b != B.get_b())
	{
		flag = true;
	}
	else if (a != B.get_a() && b == B.get_b())
	{
		flag = true;
	}
	else if (a != B.get_a() && b != B.get_b())
	{
		flag = true;
	}
	return flag;
}

Pair* Pair::operator*(const Pair& B)
{
	Pair* C = new Pair(a * B.a,b * B.b);
	return C;
}

Pair& Pair::operator=(const Pair& B)
{
	a = B.a;
	b = B.b;
	return *(this);
}
