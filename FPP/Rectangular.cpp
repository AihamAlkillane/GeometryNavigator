#include "Rectangular.h"



Rectangular::Rectangular(float width, float height, float depth, Point transPoint, int texture)
{
	this->width = width;
	this->height = height;
	this->texture = texture;
	this->transPoint = transPoint;
	this->depth = depth;
}
Rectangular::Rectangular()
{

}
void Rectangular::draw()
{
	glBindTexture(GL_TEXTURE_2D, texture);

	glPushMatrix();
	glTranslated(transPoint.x, transPoint.y, transPoint.z);
	glRotated(angle, 0, 1, 0);

	glBegin(GL_QUADS);

	// Front face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, depth * 0.5f);

	// Back face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, -depth * 0.5f);

	// Right face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, depth * 0.5f);

	// Left face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, depth * 0.5f);

	// Top face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, -depth * 0.5f);

	// Bottom face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glEnd();
	glPopMatrix();
}
void Rectangular::draw2()
{
	glBindTexture(GL_TEXTURE_2D, texture);

	glPushMatrix();
	glTranslated(transPoint.x, transPoint.y, transPoint.z);
	glRotated(angle, 0, 1, 0);

	glBegin(GL_QUADS);

	// Front face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, depth * 0.5f);

	// Back face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, -depth * 0.5f);

	// Right face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(2.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(2.0f, 2.0f);
	glVertex3f(width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 2.0f);
	glVertex3f(width * 0.5f, height * 0.5f, depth * 0.5f);

	// Left face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(2.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(2.0f, 2.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 2.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, depth * 0.5f);

	// Top face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, depth * 0.5f);

	glTexCoord2f(2.0f, 0.0f);
	glVertex3f(width * 0.5f, height * 0.5f, depth * 0.5f);

	glTexCoord2f(2.0f, 2.0f);
	glVertex3f(width * 0.5f, height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 2.0f);
	glVertex3f(-width * 0.5f, height * 0.5f, -depth * 0.5f);

	// Bottom face
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(2.0f, 0.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, depth * 0.5f);

	glTexCoord2f(2.0f, 2.0f);
	glVertex3f(width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glTexCoord2f(0.0f, 2.0f);
	glVertex3f(-width * 0.5f, -height * 0.5f, -depth * 0.5f);

	glEnd();
	glPopMatrix();
}