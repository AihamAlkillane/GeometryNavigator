#include "Quad.h"


Quad::Quad(float width, float height, Point transPoint,float rotationAngle, int texture)
{
	this->width = width;
	this->height = height;
	this->texture = texture;
	this->transPoint = transPoint;
	this->rotationAngle = rotationAngle;
}

void Quad::drawQuad()
{
	glBindTexture(GL_TEXTURE_2D, texture);
	glPushMatrix();
	glTranslated(transPoint.x, transPoint.y, transPoint.z);
	glRotated(rotationAngle, 0, 1, 0);

	glBegin(GL_QUADS);

	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, 0,-height * 0.5f); // Bottom-left vertex
	
	glTexCoord2f(10.0f, 0.0f); 
	glVertex3f(width * 0.5f, 0, -height * 0.5f);  // Bottom-right vertex

	glTexCoord2f(10.0f, 1.0f);
	glVertex3f(width * 0.5f, 0, height * 0.5f);   // Top-right vertex
	
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, 0, height * 0.5f);  // Top-left vertex
	
	glEnd();
	glPopMatrix();
}
void Quad::drawQuad2()
{
	glBindTexture(GL_TEXTURE_2D, texture);
	glPushMatrix();
	glTranslated(transPoint.x, transPoint.y, transPoint.z);
	glRotated(rotationAngle, 1, 0, 0);

	glBegin(GL_QUADS);

	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-width * 0.5f, 0, -height * 0.5f); // Bottom-left vertex

	glTexCoord2f(10.0f, 0.0f);
	glVertex3f(width * 0.5f, 0, -height * 0.5f);  // Bottom-right vertex

	glTexCoord2f(10.0f, 1.0f);
	glVertex3f(width * 0.5f, 0, height * 0.5f);   // Top-right vertex

	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-width * 0.5f, 0, height * 0.5f);  // Top-left vertex

	glEnd();
	glPopMatrix();
}

Quad::Quad()
{
}
