//Реализовать класс Payment, используя для представления полей начислений и удержаний класс Money.
#include "Money.h"
#include "Payment.h"
#include <Windows.h>
#include <iostream>

using namespace std;


int main() {
	system("chcp 1251");
	SetConsoleOutputCP(1251);

	Payment first(10000, 20, 10);
	Money result, result1, result2;
	int result3;
	result = first.count_accured_amount();
	result1 = first.count_amount_withheld();
	result2 = first.count_final_summ();
	cout << "����������� �����: ";
	result.print();
	cout << "���������� �����: ";
	result1.print();
	cout << "���������� �� ���� �����: ";
	result2.print();
	result3 = first.count_experience();
	cout << "���� ������: " << result3 << endl;

	return 0;
}