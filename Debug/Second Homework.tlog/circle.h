#pragma once

class Circle : public Point {
public:
	Circle(double r = 0.0, int a = 0, int b = 0);
	~Circle();
	void setRadius(double r);
	double getRadius();
	double area();
protected:
	double radius;
};
