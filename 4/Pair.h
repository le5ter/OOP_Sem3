#pragma once
#include <string>
#include <iostream>

using namespace std;

class Pair
{
protected:
	int a, b;
public:
	Pair();
	Pair(int a, int b);
	~Pair();
	Pair(const Pair& obj);
	int get_a() const;
	int get_b() const;
	void print();
	bool operator==(const Pair& B);
	bool operator!=(const Pair& B);
	Pair* operator*(const Pair& B);
	Pair& operator=(const Pair& B);
};

