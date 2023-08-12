#pragma once
#include "Triangle.h"
#include <cmath>
#include <string>

const double pi = 3.14159265358979323846;

Triangle::Triangle() {
	side1 = 0;
	side2 = 0;
	side3 = 0;
	angle1 = 0;
	angle2 = 0;
	angle3 = 0;
}

Triangle::Triangle(double side1, double side2, double angle3) {
	this->side1 = side1;
	this->side2 = side2;
	this->angle3 = angle3;
	this->side3 = sqrt(side1 * side1 + side2 * side2 - 2 * side1 * side2 * cos(angle3 * pi / 180));
	this->angle1 = asin(side1 * sin(angle3 * pi / 180) / side3) * 180 / pi;
	this->angle2 = asin(side2 * sin(angle1 * pi / 180) / side1) * 180 / pi;
}

void Triangle::set_side1(double s1) {
	this->side1 = s1;
};

void Triangle::set_side2(double s2) {
	this->side2 = s2;
};

void Triangle::set_side3(double s3) {
	this->side3 = s3;
};

void Triangle::set_angle1(double a1) {
	this->angle1 = a1;
};

void Triangle::set_angle2(double a2) {
	this->angle2 = a2;
};

void Triangle::set_angle3(double a3) {
	this->angle3 = a3;
};

void Triangle::get() {
	cout << "side1 = " << side1 << " side2 = " << side2 << " side3 = " << side3 << endl;
	cout << "angle1 = " << angle1 << " angle2 = " << angle2 << " angle3 = " << angle3 << endl;
}

double Triangle::get_side1() {
	cout << "side1 = " << side1 << endl;
	return side1;
};

double Triangle::get_side2() {
	cout << "side2 = " << side2 << endl;
	return side2;
};

double Triangle::get_side3() {
	cout << "side3 = " << side3 << endl;
	return side3;
};

double Triangle::get_angle1() {
	cout << "angle1 = " << angle1 << endl;
	return angle1;
};

double Triangle::get_angle2() {
	cout << "angle2 = " << angle2 << endl;
	return angle2;
};

double Triangle::get_angle3() {
	cout << "angle3 = " << angle3 << endl;
	return angle3;
};

double Triangle::square() {
	double s = 0.5 * side1 * side2 * sin(angle3 * pi / 180);
	return s;
}

double Triangle::perimetr() {
	double tmp = side1 + side2 + side3;
	return tmp;
}

double Triangle::height1(Triangle& a) {
	double h1 = 2 * a.square() / side1;
	return h1;
}

double Triangle::height2(Triangle& a) {
	double h2 = 2 * a.square() / side2;
	return h2;
}

double Triangle::height3(Triangle& a) {
	double h3 = 2 * a.square() / side3;
	return h3;
}

string Triangle::type() {
	string type;
	if (side1 == side2 == side3) {
		type = "equilateral";
	}
	else if ((side1 == side2 || side2 == side3 || side1 == side3) && (angle1 == 90 || angle2 == 90 || angle3 == 90)) {
		type = "isosceles and right";
	}
	else if (side1 == side2 || side2 == side3 || side1 == side3) {
		type = "isosceles";
	}
	else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
		type = "right";
	}
	cout << "type = " << type << endl;
	return type;
}

string Triangle::toString(Triangle& a) {
	string tmp = "Side1 = " + to_string(side1) + ", Side2 = " + to_string(side2) + ", Side3 = " + to_string(side3) + ", Angle1 = " + to_string(angle1) + ", Angle2 = " + to_string(angle2) + ", Angle3 = " + to_string(angle3) + ", Square = " + to_string(a.square()) + ", Perimert = " + to_string(a.perimetr()) + ", h1 = " + to_string(a.height1(a)) + ", h2 = " + to_string(a.height2(a)) + ", h3 = " + to_string(a.height3(a));
	return tmp;
}
