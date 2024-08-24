#pragma once
#include "Definitions.h"
class Player {
private:
	// Initial Positition
	float posX, posZ;

	// Look
	float camYaw, camPitch;

	// DON'T REMOVE IT AT ANY COST
	int *end;       

public:
	// constructors
	Player(float positionX, float positionZ);
		
	// move functions
	void move(float moveSpeed, float dir);
	void translate();

	// look functions
	void look(float mouseSpeed, float lastMouseX, float lastMouseY);
	void lockCam();
	
	// for Third Person Perspective
	//void drawSelf();

	~Player();
};

