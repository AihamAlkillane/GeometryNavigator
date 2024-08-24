#include "Cutils.h"
#include "Globals.h"

void makeGrid(float size){
	glBegin(GL_LINES);
	for(int i=-size;i<=size;++i) {
		glVertex3f(i,0,-size);
		glVertex3f(i,0,size);
		
		glVertex3f(size,0,i);
		glVertex3f(-size,0,i);


	}
	glEnd();
}
void skybox()
{
	glEnable(GL_TEXTURE_2D);

	glBindTexture(GL_TEXTURE_2D, front);
	glBegin(GL_QUADS);
	glTexCoord2d(0, 0);
	glVertex3d(-4000, -4000, -4000);
	glTexCoord2d(1, 0);
	glVertex3d(4000, -4000, -4000);
	glTexCoord2d(1, 1);
	glVertex3d(4000, 4000, -4000);
	glTexCoord2d(0, 1);
	glVertex3d(-4000, 4000, -4000);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, back);
	glBegin(GL_QUADS);
	glTexCoord2d(0, 0);
	glVertex3d(-4000, -4000, 4000);
	glTexCoord2d(1, 0);
	glVertex3d(4000, -4000, 4000);
	glTexCoord2d(1, 1);
	glVertex3d(4000, 4000, 4000);
	glTexCoord2d(0, 1);
	glVertex3d(-4000, 4000, 4000);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, left);
	glBegin(GL_QUADS);
	glTexCoord2d(0, 0);
	glVertex3d(-4000, -4000, 4000);
	glTexCoord2d(1, 0);
	glVertex3d(-4000, -4000, -4000);
	glTexCoord2d(1, 1);
	glVertex3d(-4000, 4000, -4000);
	glTexCoord2d(0, 1);
	glVertex3d(-4000, 4000, 4000);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, right);
	glBegin(GL_QUADS);
	glTexCoord2d(1, 0);
	glVertex3d(4000, -4000, 4000);
	glTexCoord2d(0, 0);
	glVertex3d(4000, -4000, -4000);
	glTexCoord2d(0, 1);
	glVertex3d(4000, 4000, -4000);
	glTexCoord2d(1, 1);
	glVertex3d(4000, 4000, 4000);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, top);
	glBegin(GL_QUADS);
	glTexCoord2d(0, 0);
	glVertex3d(-4000, 4000, -4000);
	glTexCoord2d(1, 0);
	glVertex3d(4000, 4000, -4000);
	glTexCoord2d(1, 1);
	glVertex3d(4000, 4000, 4000);
	glTexCoord2d(0, 1);
	glVertex3d(-4000, 4000, 4000);
	glEnd();

	glDisable(GL_TEXTURE_2D);

}

void handlePassiveMouse(int x, int y){

	lastMouseX = x;
	lastMouseY = y;
}
void checkInput(){

	if (keyDown['s'])
	{
		player->move(0.1f, 0.0f);
	}
	if (keyDown['w'])
	{
		player->move(0.1f, 180.0f);
	}
	if (keyDown['d'])
	{
		player->move(0.1f, 90.0f);
	}
	if (keyDown['a'])
	{
		player->move(0.1f, 270.0f);
	}
	if (keyDown[27]) { // ASCII value for escape key
		exit(0); // Exit the program
	}
}

//Called when a key is pressed
void handleKeypress(unsigned char key, int x, int y) {    //The current mouse coordinates
	keyDown[key] = true;
}

void handleKeyUp(unsigned char key, int x, int y){
	keyDown[key] = false;
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 20000.0);
	screenWidth = w;
	screenHeight = h;
}


