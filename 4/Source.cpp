//Создать класс Pair с операциями проверки на равенство и перемножение полей. Реализовать операцию вычетания. 
//Переопределить операцию в классе Rational.
#include "Pair.h"
#include "Rational.h"

using namespace std;

int main()
{
	system("chcp 1251");
	Pair A(1, 3), B(2, 4), *C;
	Rational _A(1, 2), _B(2, 12), _C;
	//C = A * B;
	//C.print();
	_C = _A + _B;
	_C.print();
	_C = _A - _B;
	_C.print();
	C = _A * _B;

	Rational* res = (Rational*)C;
	res->print();
	return 0;
}