#include<cstdio>
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   //glLoadIdentity();
    //Water
   glBegin(GL_POLYGON);
   glColor3ub(64, 164, 223);
   glVertex2f(1,-1);
   glVertex2f(1,0.5);
   glVertex2f(-1,0.5);
   glVertex2f(-1,-1);
   glEnd();
   glFlush();

   //Body Boat
   glBegin(GL_POLYGON);
   glColor3ub(0, 0, 0);
   glVertex2f(0,0.45);
   glVertex2f(0.1,0.35);
   glVertex2f(0.4,0.35);
   glVertex2f(0.5,0.45);
   glEnd();
   glFlush();

    //Hood
   glBegin(GL_POLYGON);
   glColor3ub(255, 223, 70);
   glVertex2f(0.06,0.45);
   glVertex2f(0.42,0.45);
   glVertex2f(0.4,0.45);
   glVertex2f(0.38,0.55);
   glVertex2f(0.12,0.55);
   glVertex2f(0.1,0.45);
   glEnd();
   glFlush();

    //Rod
   glBegin(GL_QUADS);
   glColor3ub(169,169,169);
   glVertex2f(0.35,0.55);
   glVertex2f(0.35,0.75);
   glVertex2f(0.34,0.75);
   glVertex2f(0.34,0.55);
   glEnd();
   glFlush();

   //Flag
   glBegin(GL_QUADS);
   glColor3ub(0, 106, 78);
   glVertex2f(0.18,0.58);
   glVertex2f(0.38,0.58);
   glVertex2f(0.38,0.74);
   glVertex2f(0.18,0.74);
   glEnd();
   glFlush();

   //Fish
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(-0.25,0.25);
   glVertex2f(-0.35,0.19);
   glVertex2f(-0.30,0.21);
   glVertex2f(-0.40,0.25);
   glVertex2f(-0.30,0.29);
   glVertex2f(-0.35,0.31);
   glEnd();
   glFlush();

   //Fish Tail
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(-0.39,0.25);
   glVertex2f(-0.43,0.30);
   glVertex2f(-0.43,0.20);
   glEnd();
   glFlush();

   //Grass
   glBegin(GL_POLYGON);
   glColor3ub(127,255,0);
   glVertex2f(-1.0, 0.05);
   glVertex2f(0.1, 0.05);
   glVertex2f(0.2, -0.15);
   glVertex2f(0.05, -0.2);
   glVertex2f(0.25, -0.30);
   glVertex2f(0.10, -0.45);
   glVertex2f(0.15, -0.6);
   glVertex2f(0.3, -0.7);
   glVertex2f(0.10, -0.75);
   glVertex2f(0.5, -0.8);
   glVertex2f(0.3, -0.85);
   glVertex2f(0.6, -0.95);
   glVertex2f(0.8, -1.0);
   glVertex2f(-1.0, -1.0);
   glEnd();
   glFlush();
}



int main(int argc, char** argv) {

   glutInit(&argc, argv);
   glutInitWindowSize(1200, 800);
   glutInitWindowPosition(300, 100);
   glutCreateWindow("Village Scene");
   glutDisplayFunc(display);
   init();
   //glutKeyboardFunc(handleKeypress);
   //glutMouseFunc(handleMouse);
   //glutTimerFunc(1000, update, 0);
   glClearColor(1,1,1,1);
   glutMainLoop();
   return 0;
}
