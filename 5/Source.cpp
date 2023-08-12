//Создать абстрактный базовый класс Triangle. Переопределить функции вычисления площади и периметра в классе наследнике.
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

using namespace std;

int main()
{
	Triangle* A = new RightTriangle();
	A->print();
	double s = A->Square();
	double p = A->Perimetr();
	cout << "Square = " << s << " Perimetr = " << p << endl;
	Triangle* B = new IsoscelesTriangle(6, 45);
	B->print();
	double s1 = B->Square();
	double p1 = B->Perimetr();
	cout << "Square = " << s1 << " Perimetr = " << p1 << endl;
	Triangle *C = new EquilateralTriangle();
	double s2 = C->Square();
	double p2 = C->Perimetr();
	C->print();
	cout << "Square = " << s2 << " Perimetr = " << p2 << endl;
	return 0;
}