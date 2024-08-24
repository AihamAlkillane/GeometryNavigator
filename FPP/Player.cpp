#include "Player.h"

Player::Player(float positionX, float positionZ)
{ 
	this->posX = positionX;
	this->posZ = positionZ;

	this->camYaw = 0.0;
	this->camPitch = 0.0;
}
void Player::move(float moveSpeed , float dir)
{
	float rad = (camYaw+dir) * PI / 180.0;	
	posX -= sin(rad) *  moveSpeed;
	posZ -= cos(rad) *  moveSpeed;
}
void Player::translate()
{
	glTranslated(posX, 0.0, posZ);
}

void Player::look(float mouseSpeed, float lastMouseX, float lastMouseY)
{
	int midX = glutGet(GLUT_SCREEN_WIDTH) / 2;
	int midY = glutGet(GLUT_SCREEN_WIDTH) / 2;

	camYaw += mouseSpeed * (midX - lastMouseX);
	camPitch += mouseSpeed * (midY - lastMouseY);
	
	lockCam();

	glutWarpPointer(midX, midY);

	glRotatef(-camPitch, 1.0, 0.0, 0.0);
	glRotatef(-camYaw, 0.0, 1.0, 0.0);
}
void Player::lockCam()
{
	if (camPitch > 90.0)
		camPitch = 90.0;

	if (camPitch < -90.0)
		camPitch = -90.0;

	if (camYaw < 0.0)
		camYaw += 360.0;

	if (camYaw > 360.0)
		camYaw -= 360;
}

//void Player::drawSelf()   // for Third Person Perspective
//{
//  
//}

Player::~Player()
{
}