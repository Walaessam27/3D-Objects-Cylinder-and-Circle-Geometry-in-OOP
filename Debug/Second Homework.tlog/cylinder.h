#pragma once


class Cylinder : public Circle {
public:
	Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);
	void setHeight(double h); // set height
	double getHeight(); // return height
	double volume(); // calculate and return volume
protected:
	double height; // height of the Cylinder
};
