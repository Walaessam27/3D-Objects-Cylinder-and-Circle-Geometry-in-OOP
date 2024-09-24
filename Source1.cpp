#include"circle.h"
#include"point class.h"
#include"cylinder.h"

#include<iostream>
using namespace std;

Circle::Circle(double r, int a, int b) : Point(a, b)
{
	radius = r;
	cout << "Circle constructor: radius is"
		<< radius << "[" << x << "," << y << "]" << endl;
}
Circle::~Circle()
{
	cout << "Circle destructor radius is"
		<< radius << "[" << x << "," << y << ']' << endl;
}

void Circle::setRadius(double r) { if (r >= 0) radius = r; }

double Circle::getRadius() { return radius; }

double Circle::area()
{
	return 3.14159 * radius * radius;
}