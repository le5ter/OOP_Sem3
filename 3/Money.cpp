#include "Money.h"
#include <iostream>

using namespace std;

Money::Money() : rub(0), kopeck(0) {}

Money::Money(long rub) : rub(rub), kopeck(0) {}

Money::Money(long rub, unsigned char kopeck) : rub(rub), kopeck(kopeck) {}

Money::Money(const Money& obj)
{
	rub = obj.rub;
	kopeck = obj.kopeck;
}

int Money::fullkopecks()
{
	int tmp = rub * 100 + kopeck;
	return tmp;
}

int Money::get_rub() const
{
	return rub;
}

int Money::get_kopecks() const
{
	return kopeck;
}

Money Money::transform()
{
	int fullkopeck = this->rub * 100 + (int)this->kopeck;
	this->rub = fullkopeck / 100;
	this->kopeck = fullkopeck % 100;

	return *this;
}

void Money::setRub(int rub)
{
	this->rub = rub;
}

void Money::setKopeck(int kopeck)
{
	this->kopeck = kopeck;
}

Money operator+(Money& A, Money& B)
{
	Money tmp;
	tmp.kopeck = A.kopeck + B.kopeck;
	tmp.rub = A.rub + B.rub;
	tmp.transform();

	return tmp;
}

Money operator+(Money& A, double B)
{
	Money tmp;
	tmp.rub = A.rub + int(B) / 100;
	tmp.kopeck = A.kopeck + int(B) % 100;
	return tmp;
}

Money operator-(Money& A, Money& B)
{
	Money tmp;
	int fullkopeck1 = A.fullkopecks();
	int fullkopeck2 = B.fullkopecks();
	if (fullkopeck1 >= fullkopeck2)
	{
		int result = fullkopeck1 - fullkopeck2;
		tmp.rub = result / 100;
		tmp.kopeck = result % 100;
	}
	else
	{
		cout << "Операцию выполнить нельзя!\n";
	}

	return tmp;
}

int operator/(Money& A, Money& B)
{
	int fullkopeck1 = A.fullkopecks();
	int fullkopeck2 = B.fullkopecks();
	if (fullkopeck2 != 0)
	{
		return fullkopeck1 / fullkopeck2;
	}
	else
	{
		cout << "Операция не может быть выполнена!\n";
		return 0;
	}
}

Money operator/(Money& A, double B)
{
	Money tmp;
	int fullkopeck = A.fullkopecks();
	int temp = fullkopeck / (int)B;
	if (B != 0)
	{
		tmp.rub = temp / 100;
		tmp.kopeck = temp % 100;
	}
	else
	{
		cout << "Операция не может быть выполнена";
	}
	return tmp;
}

double operator*(Money& A, double B)
{
	int fullkopeck = A.fullkopecks();
	double tmp = fullkopeck * B;

	return tmp / 100;
}

bool operator==(const Money& A, const Money& B)
{
	return A.get_rub() == B.get_rub() && A.get_kopecks() == B.get_kopecks();
}

bool operator<(const Money& A, const Money& B)
{
	if (A.get_rub() == B.get_rub() && A.get_kopecks() < B.get_kopecks())
	{
		return true;
	}
	else if (A.get_rub() < B.get_rub() && A.get_kopecks() < B.get_kopecks())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator>(const Money& A, const Money& B)
{
	if (A.get_rub() == B.get_rub() && A.get_kopecks() > B.get_kopecks())
	{
		return true;
	}
	else if (A.get_rub() > B.get_rub() && A.get_kopecks() > B.get_kopecks())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(const Money& A, const Money& B)
{
	if (A.get_rub() == B.get_rub() && A.get_kopecks() != B.get_kopecks())
	{
		return true;
	}
	else if (A.get_rub() != B.get_rub() && A.get_kopecks() == B.get_kopecks())
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Money::print()
{
	cout << rub << ',' << (int)kopeck << '\n';
}
