//Создать класс Triangle для представления треугольника.  
#include "Triangle.cpp"
constexpr auto pi = 3.14159265358979323846;


int main() {
	system("chcp 1251");
	Triangle first(4, 4, 45);
	string s = first.toString(first);
	cout << s;
	return 0;
}