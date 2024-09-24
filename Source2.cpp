#include"circle.h"
#include"point class.h"
#include"cylinder.h"


#include<iostream>
using namespace std;

// Cylinder constructor calls Circle constructor
Cylinder::Cylinder(double h, double r, int x, int y)
	:Circle(r, x, y) // call base-class constructor
{
	setHeight(h);
}// height = h
//Set height of Cylinder
void Cylinder::setHeight(double h)
{
	height = (h >= 0 ? h : 0);
}
// Get height of Cylinder
double Cylinder::getHeight() { return height; }

// Calculate volume of Cylinder
double Cylinder::volume()
{
	return area() * height;
}