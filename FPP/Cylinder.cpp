#include "Cylinder.h"

Cylinder::Cylinder(float height, float radius, Point transPoint, int texture)
{
	this->transPoint = transPoint;
	this->height = height;
	this->radius = radius;
	this->texture = texture;
}
void Cylinder::drawCylinder()
{
	glPushMatrix();
	glTranslatef(transPoint.x, transPoint.y, transPoint.z);
	glRotated(angle, 0, 0, 1);
	glRotated(angle2, 0, 1, 0);
	glRotated(90, 1, 0, 0);
	glBindTexture(GL_TEXTURE_2D, texture);
	glBegin(GL_QUAD_STRIP);
	for (double i = 0; i <= 200; ++i) {
		double theta = 2.0 * PI *  i / 200;
		double x = radius * cos(theta);
		double z = radius * sin(theta);

		glTexCoord2d(i / 200, 0.0);
		glVertex3d(x, 0.0, z);
		glTexCoord2d(i / 200, 1.0);
		glVertex3d(x, height, z);
	}
	glEnd();
	glPopMatrix();
}
void Cylinder::rotate(bool direction)
{
	if (direction == true)
		this->angle -= 2;
	else
	{
		this->angle += 2;
	}
}

Cylinder::Cylinder()
{

}
Cylinder::~Cylinder()
{

}