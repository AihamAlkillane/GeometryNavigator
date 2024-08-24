#include "Circle.h"

Circle::Circle(float radius, Point transPoint, int texture)
{
	this->radius = radius;
	this->transPoint = transPoint;
	this->texture = texture;
	this->angle = 0;
}
void Circle::draw()
{

	glPushMatrix();
	glTranslated(transPoint.x, transPoint.y, transPoint.z);
	glRotated(angle, 0, 0, 1);
	glRotated(90, 1, 0, 0);
	
	glBindTexture(GL_TEXTURE_2D, texture);
	glBegin(GL_TRIANGLE_FAN);
	
	glTexCoord2f(0.5, 0.5); 
	glVertex3f(0.0, 0.0, 0.0); 

	for (int i = 0; i <= 100; ++i) {
		double theta = i * 2.0 * PI / 100;
		double x = radius * cos(theta);
		double z = radius * sin(theta);

		double u = 0.5 * cos(theta) + 0.5;
		double v = 0.5 * sin(theta) + 0.5;

		glTexCoord2f(u, v);
		glVertex3f(x, 0, z);
	}

	glEnd();
	glPopMatrix();
}
void Circle::rotate(bool direction)
{
	if (direction)
	{
		angle -= 2;
	}
	else
	{
		angle += 2;
	}
}

Circle::Circle()
{
}


Circle::~Circle()
{
}
