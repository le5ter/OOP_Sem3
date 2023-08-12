#pragma once

class Money {
private:
	long rub;
	unsigned char kopeck;

public:
	int fullkopecks();
	Money();										
	Money(long rub);
	Money(long rub, unsigned char kopeck);
	Money(const Money& obj);
	int get_rub() const;
	int get_kopecks() const;
	Money transform();					
	void setRub(int rub);
	void setKopeck(int kopeck);
	friend Money operator+(Money& A, Money& B);
	friend Money operator+(Money& A, double B);
	friend Money operator-(Money& A, Money& B);
	friend int operator/(Money& A, Money& B);
	friend Money operator/(Money& A, double B);
	friend double operator*(Money& A, double B);

	friend bool operator==(const Money& A, const Money& B);
	friend bool operator<(const Money& A, const Money& B);
	friend bool operator>(const Money& A, const Money& B);
	friend bool operator!=(const Money& A, const Money& B);

	void print();
};
