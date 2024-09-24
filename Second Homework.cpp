
#include "cylinder.h"
#include "point class.h"
#include"circle.h"
#include <iostream>

using namespace std;

int main()
{

	Cylinder cyl(5.7, 2.5, 12, 23);

	cout << "X coordinate is" << cyl.getx()
		<< "\nY coordinate is" << cyl.getY()
		<< " \nRadius is" << cyl.getRadius()
		<< "\nHeight is" << cyl.getHeight() << "\n\n";

	cyl.setHeight(10);
	cyl.setRadius(4.25);
	cyl.setPoint(2, 2);
	cout << "The new location, radius, and height of cyl are: \n";
	cout << "X coordinate is" << cyl.getx()
		<< "\nY coordinate is" << cyl.getY()
		<< "\nRadius is" << cyl.getRadius()
		<< "\nHeight is" << cyl.getHeight() << "\n\n";
	cout << "The new volume of cy1 is:" << cyl.volume() << "\n";
	return 0;
}