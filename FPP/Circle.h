#pragma once
#include "Definitions.h"
#include "Point.h"
class Circle
{
private:
	float radius;
	Point transPoint;
	int texture;
	float angle;
public:
	Circle(float radius, Point transPoint, int texture);
	void draw();
	void rotate(bool direction);
	Circle();
	~Circle();
};

