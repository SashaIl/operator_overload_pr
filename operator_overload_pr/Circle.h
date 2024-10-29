#pragma once
#include <iostream>
using namespace std;
class Circle
{

	double radius;
public:
	Circle(double r) : radius{ r } {}

	bool operator==(const Circle& anoher) {
		return this->radius == anoher.radius;
	}

	bool operator>(const Circle& another) {
		return 2 * 3.14*this->radius > 2 * 3.14 * another.radius;
	}

	bool operator<(const Circle& another) {
		return 2 * 3.14 * this->radius > 2 * 3.14 * another.radius;
	}

	friend Circle operator+(const Circle& c1, const Circle& c2) {
		return Circle(c1.radius + c2.radius);
	}

	friend Circle operator-(const Circle& c1, const Circle& c2) {
		return Circle(c1.radius - c2.radius);
	}

	friend Circle& operator+=(Circle& another, int num) {
		another.radius += num;
		return another;
	}

	friend Circle& operator-=(Circle& another, int num) {
		another.radius -= num;
		return another;
	}

	void display();

};

