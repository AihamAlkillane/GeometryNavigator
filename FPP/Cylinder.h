#pragma once

#include "Definitions.h"
#include "Point.h"

class Cylinder
{
private:
	Point transPoint;
	float height;
	float radius;
	float angle = 0;
	float angle2 = 0;
	int texture;
public:
	Cylinder(float height, float radius, Point transPoint, int texture);
	Cylinder();
	~Cylinder();
	void drawCylinder();
	void move();
	void rotate(bool direction);
};

