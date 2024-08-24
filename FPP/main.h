/*

* created by REDEEMER ON 12 / 6 / 2023 
* is now even better
*/
#ifndef _MAIN_H
#define _MAIN_H

void handleKeypress(unsigned char key, int x, int y);
void handleSpecialKeypress(int key, int x, int y);
void handleResize(int w, int h);
void handlePassiveMouse(int x, int y);
//void handleActiveMouse(int x, int y);  //remove it when u are done


void initRendering();
void drawScene();


void update(int value);
int main(int argc, char** argv);
void makeTank();
void handleKeyUp(unsigned char key, int x, int y);
void checkInput();
void playerFire(int button, int state, int x, int y);

void skybox();
#endif





