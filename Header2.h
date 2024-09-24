#pragma once
class Point {
public:
	Point(int = 0, int = 0);
	void setPoint(int, int);
	int getx();
	int getY();
	~Point();
protected:	int x, y;
};
