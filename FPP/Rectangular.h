#pragma once

#include "Definitions.h"
#include "Point.h"

class Rectangular
{
private:
	float width;
	float height;
	float depth;
	Point transPoint;
	int texture;
	int angle = 0;
public:
	Rectangular(float width, float height, float depth, Point transPoint, int texture);
	Rectangular();
	void draw();
	void draw2();
	void rotate();

};

