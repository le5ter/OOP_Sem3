#pragma once
#include <iostream>
#include <string>

using namespace std;

#pragma once
class Triangle {
private:
	double side1, side2, side3, angle1, angle2, angle3;
	string type_;
public:
	Triangle();
	Triangle(double side1, double side2, double angle3);
	void set_side1(double side1);
	void set_side2(double side2);
	void set_side3(double side3);
	void set_angle1(double angle1);
	void set_angle2(double angle2);
	void set_angle3(double angle3);
	void get();
	double get_side1();
	double get_side2();
	double get_side3();
	double get_angle1();
	double get_angle2();
	double get_angle3();
	double square();
	double perimetr();
	double height1(Triangle& a);
	double height2(Triangle& a);
	double height3(Triangle& a);
	string type();
	string toString(Triangle& a);
};

