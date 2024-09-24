#include"circle.h"
#include"point class.h"
#include"cylinder.h"

#include<iostream>
using namespace std;

Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "Point constructor:" << " I" << x << "," << y << "]" << "\nWala' Essam Ashqar" << endl;
}
Point::~Point()
{
	cout << "Point destructor:" << "[" << x << y << "]" << "\nWala' Essam Ashqar" << endl;
}

void Point::setPoint(int xValue, int yValue)
{
	x = xValue;
	y = yValue;
}
int Point::getx()
{
	return x;
}

int Point::getY()
{
	return y;
}