//Реализовать класс Set в виде шаблона.
#include "Set.cpp"

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	Set<int> A;
	A.insert(1);
	A.insert(2);
	A.insert(3);
	A.insert(4);
	A.insert(5);
	A.insert(6);
	Set<int> B;
	B.insert(4);
	B.insert(5);
	B.insert(6);
	B.insert(7);
	B.insert(8);
	B.insert(9);
	B.insert(10);
	Set<int> C;
	Set<int> D;
	Set<int> E;
	cout << "Первое множество: ";
	A.print();
	cout << "Второе множество: ";
	B.print();
	cout << "Объединение множеств: ";
	C.Union(A, B);
	C.print();
	cout << "Пересечение множеств: ";
	D.Intersection(A, B);
	D.print();
	cout << "Разность множеств: ";
	E.Differense(A, B);
	E.print();
	cout << A.isInSet(4) << '\n';
	cout << A.isInSet(0);
 	return 0;
}