//Создать класс Complex комплексных чисел поля класса указатели на тип double
#include "Complex.h"

using namespace std;

int main() {
	Complex A(1, 2);
	Complex B(2, 3);
	Complex C;
	C = A + B;
	C.getAB();
	A.getAB();
	cout << C << endl;
	return 0;
}