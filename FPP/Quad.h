#pragma once

#include"Definitions.h"
#include"Point.h"

class Quad
{
private:
	float width;
	float height;
	Point transPoint;
	int texture;
public:
	float rotationAngle = 0;
	Quad(float width, float height, Point transPoint, float rotationAngle, int texture);
	void drawQuad();
	void drawQuad2();
	Quad();
};

