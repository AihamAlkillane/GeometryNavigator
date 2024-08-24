#include "Definitions.h"
#include "Player.h"
#include "main.h"
#include "GlobalDeclarations.h"
#include "Cutils.h"

#include "Rectangular.h"

#include "texture.h"
// ==================================  REMOVE THEM ================
Rectangular re(10, 10, 10, {100, 10, 0}, -1); // there is no loaded texture here 
Rectangular re2(10, 10, 10, {100, 10, 100}, -1);
Rectangular re3(10, 10, 10, {0, 10, 100}, -1);
Rectangular re4(10, 10, 10, {200, 10, 100}, -1);
// ================================================================
int main(int argc, char** argv)
{
    //Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH), glutGet(GLUT_SCREEN_WIDTH));
    glutInitWindowPosition(50, 50);

    //Create the window
    glutCreateWindow("Tanks!");
    initRendering();

    //My handles
    glutDisplayFunc(drawScene);
    glutKeyboardFunc(handleKeypress);
    glutKeyboardUpFunc(handleKeyUp);
    glutPassiveMotionFunc(handlePassiveMouse);
    glutReshapeFunc(handleResize);

    if (isFullscreen)
    {
        glutSetCursor(GLUT_CURSOR_NONE);
    }

    glEnable(GL_DEPTH_TEST);
    player = new Player(0, 0); // initial position of the camera
    glutTimerFunc(10, update, 0); //NOTE!!!!  if the SCENE IS TOO LAGGY DECREASE THE VALUE but not too much 

    glutMainLoop();
    return 0;
}

void update(int value) // don't remove it 
{
    checkInput();
    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}

//=================================================ADD TEXTURE HERE=============================================//
void initRendering()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.5f); // Black Background
    glClearDepth(1.0f);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
    glShadeModel(GL_SMOOTH);

    if (isFullscreen)
    {
        glutFullScreen();
        glutWarpPointer(glutGet(GLUT_SCREEN_WIDTH) / 2, glutGet(GLUT_SCREEN_HEIGHT) / 2);
    }

    glEnable(GL_TEXTURE_2D);
    back = LoadTexture("back.bmp"); //0
    front = LoadTexture("front.bmp"); //1
    left = LoadTexture("left.bmp"); //2
    right = LoadTexture("right.bmp"); //3
    top = LoadTexture("top.bmp"); //4
    LoadTexture("brick.bmp"); //5
    glDisable(GL_TEXTURE_2D);
}


//Draws the 3D scene
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslated(0, -5, 0); // u can change de Y axis here

    player->look(0.1f, lastMouseX, lastMouseY); // here we can change the velocity of the mouse 
    player->translate(); // MOVE
    //===========================================DRAW HERE=================================================//
    // REMOVE THEM
    glColor3f(1, 0, 0);
    re.draw();
    glColor3f(0, 0, 0);
    re2.draw();
    glColor3f(0, 1, 0);
    re3.draw();
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    re4.draw();
    glDisable(GL_TEXTURE_2D);
    // ============

    makeGrid(500);
    skybox();

    glutSwapBuffers();
}
