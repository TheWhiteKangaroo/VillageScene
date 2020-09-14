#include<cstdio>
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;
float x,y,i;
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
/*
void sun(void){
    //glLoadIdentity();
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.1*sin(i);
			y=0.1*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

}
*/
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

   //sky
   glBegin(GL_QUADS);
   glColor3ub(124, 225, 255);
   glVertex2f(-1,0.5);
   glVertex2f(1,0.5);
   glVertex2f(1,1);
   glVertex2f(-1,1);
   glEnd();
   glFlush();


   //Fish
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(0.95,0.25);
   glVertex2f(0.85,0.19);
   glVertex2f(0.90,0.21);
   glVertex2f(0.80,0.25);
   glVertex2f(0.90,0.29);
   glVertex2f(0.85,0.31);
   glEnd();
   glFlush();

   //Fish Tail
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(0.81,0.25);
   glVertex2f(0.77,0.30);
   glVertex2f(0.77,0.20);
   glEnd();
   glFlush();


   //Fish_2
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(0.75,0.25);
   glVertex2f(0.65,0.19);
   glVertex2f(0.70,0.21);
   glVertex2f(0.60,0.25);
   glVertex2f(0.70,0.29);
   glVertex2f(0.65,0.31);
   glEnd();
   glFlush();


   //Fish Tail
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(0.61,0.25);
   glVertex2f(0.57,0.30);
   glVertex2f(0.57,0.20);
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
   glVertex2f(1, -0.30);
   glVertex2f(1.0, -1.0);
   glVertex2f(-1, -1);
   glEnd();
   glFlush();


   //Home

   //Home Body
   //Roof
   glBegin(GL_POLYGON);
   glColor3ub(139,0,0);
   glVertex2f(-0.7, 0.2);
   glVertex2f(-0.3, 0.2);
   glVertex2f(-0.4, 0.35);
   glVertex2f(-0.8, 0.35);
   glVertex2f(-0.79, 0.32);
   glEnd();
   glFlush();

   //Roof 2
   glBegin(GL_POLYGON);
   glColor3ub(139,0,0);
   glVertex2f(-0.88, 0.19);
   glVertex2f(-0.86, 0.19);
   glVertex2f(-0.79, 0.32);
   glVertex2f(-0.8, 0.35);
   //glVertex2f(-0.79, 0.32);
   glEnd();
   glFlush();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-0.86, 0.19);
    glVertex2f(-0.86, -0.27);
    glVertex2f(-0.68, -0.3);
    glVertex2f(-0.68, 0.2);
    glVertex2f(-0.7, 0.2);
    glVertex2f(-0.79, 0.32);
    glEnd();
    glFlush();

    //Body2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-0.68, 0.2);
    glVertex2f(-0.68, -0.3);
    glVertex2f(-0.32, -0.3);
    glVertex2f(-0.32, 0.2);
    glEnd();
    glFlush();

    //Door
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-0.54, 0.05);
    glVertex2f(-0.54, -0.3);
    glVertex2f(-0.44, -0.3);
    glVertex2f(-0.44, 0.05);
    glEnd();
    glFlush();

    //Window_1
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-0.64, -0.05);
    glVertex2f(-0.64, -0.20);
    glVertex2f(-0.58, -0.20);
    glVertex2f(-0.58, -0.05);
    glEnd();
    glFlush();

    //Window_2
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-0.42, -0.05);
    glVertex2f(-0.42, -0.20);
    glVertex2f(-0.36, -0.20);
    glVertex2f(-0.36, -0.05);
    glEnd();
    glFlush();

    //Window_3
    glBegin(GL_QUADS);
    glColor3ub(255,255,51);
    glVertex2f(-0.82, 0.05);
    glVertex2f(-0.82, -0.15);
    glVertex2f(-0.74, -0.15);
    glVertex2f(-0.74, 0.05);
    glEnd();
    glFlush();

    //Stair
    glBegin(GL_QUADS);
    glColor3ub(0, 106, 78);
    glVertex2f(-0.86, -0.27);
    glVertex2f(-0.88, -0.30);
    glVertex2f(-0.68, -0.33);
    glVertex2f(-0.68, -0.30);

    glVertex2f(-0.68, -0.30);
    glVertex2f(-0.68, -0.33);
    glVertex2f(-0.3, -0.33);
    glVertex2f(-0.32, -0.30);
    glEnd();
    glFlush();

    //Door
   glBegin(GL_POLYGON);
   glColor3ub(139,0,0);
   glVertex2f(-0.54, -0.3);
   glVertex2f(-0.48, -0.25);
   glVertex2f(-0.48, 0.0);
   glVertex2f(-0.54, 0.05);

   glEnd();
   glFlush();

   //Fenching
   glBegin(GL_QUADS);
   glVertex2f(-0.86, -0.27);
   glVertex2f(-0.86, -0.26);
   glVertex2f(-1, -0.26);
   glVertex2f(-1, -0.27);

   glVertex2f(-0.86, -0.20);
   glVertex2f(-0.86, -0.19);
   glVertex2f(-1, -0.19);
   glVertex2f(-1, -0.20);

   glVertex2f(-0.86, -0.13);
   glVertex2f(-0.86, -0.12);
   glVertex2f(-1, -0.12);
   glVertex2f(-1, -0.13);


   glVertex2f(-0.86, -0.06);
   glVertex2f(-0.86, -0.05);
   glVertex2f(-1, -0.05);
   glVertex2f(-1, -0.06);

   glVertex2f(-1, -0.27);
   glVertex2f(-0.99, -0.27);
   glVertex2f(-0.99, -0.05);
   glVertex2f(-1, -0.05);

   glVertex2f(-0.95, -0.27);
   glVertex2f(-0.94, -0.27);
   glVertex2f(-0.94, -0.05);
   glVertex2f(-0.95, -0.05);

   glVertex2f(-0.91, -0.27);
   glVertex2f(-0.90, -0.27);
   glVertex2f(-0.90, -0.05);
   glVertex2f(-0.91, -0.05);


   glEnd();
   glFlush();

   //Hills
   glBegin(GL_POLYGON);
   glColor3ub(0,100,0);
   glVertex2f(-0.7,0.5);
   glVertex2f(-0.75,0.6);
   glVertex2f(-0.8,0.7);
   glVertex2f(-0.85,0.75);
   glVertex2f(-0.9,0.7);
   glVertex2f(-0.95,0.6);
   glVertex2f(-1,0.5);
   glEnd();
   glFlush();


    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
   glVertex2f(-0.4,0.5);
   glVertex2f(-0.45,0.6);
   glVertex2f(-0.5,0.7);
   glVertex2f(-0.55,0.75);
   glVertex2f(-0.6,0.7);
   glVertex2f(-0.65,0.6);
   glVertex2f(-0.7,0.5);
   glEnd();
   glFlush();


    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
   glVertex2f(-0.1,0.5);
   glVertex2f(-0.15,0.6);
   glVertex2f(-0.2,0.7);
   glVertex2f(-0.25,0.75);
   glVertex2f(-0.3,0.7);
   glVertex2f(-0.35,0.6);
   glVertex2f(-0.4,0.5);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glColor3ub(0,100,0);
   glVertex2f(0.2,0.5);
   glVertex2f(0.15,0.6);
   glVertex2f(0.1,0.7);
   glVertex2f(0.05,0.75);
   glVertex2f(0.0,0.7);
   glVertex2f(-0.05,0.6);
   glVertex2f(-0.1,0.5);
   glEnd();
   glFlush();


   glBegin(GL_POLYGON);
   glColor3ub(0,100,0);
   glVertex2f(0.5,0.5);
   glVertex2f(0.45,0.6);
   glVertex2f(0.4,0.7);
   glVertex2f(0.35,0.75);
   glVertex2f(0.3,0.7);
   glVertex2f(0.25,0.6);
   glVertex2f(0.2,0.5);
   glEnd();
   glFlush();


   glBegin(GL_POLYGON);
   glColor3ub(0,100,0);
   glVertex2f(0.8,0.5);
   glVertex2f(0.75,0.6);
   glVertex2f(0.7,0.7);
   glVertex2f(0.65,0.75);
   glVertex2f(0.6,0.7);
   glVertex2f(0.55,0.6);
   glVertex2f(0.5,0.5);
   glEnd();
   glFlush();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
   glVertex2f(1.1,0.5);
   glVertex2f(1.05,0.7);
   glVertex2f(1,0.8);
   glVertex2f(0.95,0.85);
   glVertex2f(0.9,0.8);
   glVertex2f(0.85,0.7);
   glVertex2f(0.8,0.5);
   glEnd();
   glFlush();

   //Trees
   //Tree_1
   glBegin(GL_QUADS);
   glVertex2f(-0.42,0.5);
   glVertex2f(-0.38, 0.5);
   glVertex2f(-0.38, 0.75);
   glVertex2f(-0.42, 0.75);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(-0.4,0.8);
   glVertex2f(-0.5,0.75);
   glVertex2f(-0.4,0.75);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(-0.5,0.8);
   glVertex2f(-0.4,0.75);
   glVertex2f(-0.4,0.8);
   glEnd();
   glFlush();


   glBegin(GL_POLYGON);
   glVertex2f(-0.4,0.8);
   glVertex2f(-0.3,0.75);
   glVertex2f(-0.4,0.75);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(-0.3,0.8);
   glVertex2f(-0.4,0.75);
   glVertex2f(-0.4,0.8);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(-0.44,0.8);
   glVertex2f(-0.36,0.8);
   glVertex2f(-0.36,0.85);
   glVertex2f(-0.4,0.83);
   glVertex2f(-0.44,0.85);
   glEnd();
   glFlush();

   //Tree_2
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
   glVertex2f(0.48,0.5);
   glVertex2f(0.52, 0.5);
   glVertex2f(0.52, 0.75);
   glVertex2f(0.48, 0.75);
   glEnd();
   glFlush();

   glColor3ub(107,142,35);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.8);
   glVertex2f(0.4,0.75);
   glVertex2f(0.5,0.75);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.8);
   glVertex2f(0.5,0.75);
   glVertex2f(0.5,0.8);
   glEnd();
   glFlush();


   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.8);
   glVertex2f(0.6,0.75);
   glVertex2f(0.5,0.75);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.8);
   glVertex2f(0.5,0.75);
   glVertex2f(0.5,0.8);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glVertex2f(0.46,0.8);
   glVertex2f(0.54,0.8);
   glVertex2f(0.54,0.85);
   glVertex2f(0.5,0.83);
   glVertex2f(0.46,0.85);
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



   //Roof Outline
   glBegin(GL_LINE_STRIP);
   glColor3ub(0,0,0);
   glVertex2f(-0.7, 0.2);
   glVertex2f(-0.3, 0.2);
   glVertex2f(-0.4, 0.35);
   glVertex2f(-0.8, 0.35);
   glVertex2f(-0.88, 0.19);
   glVertex2f(-0.86, 0.19);
   glVertex2f(-0.79, 0.32);
   glVertex2f(-0.7, 0.2);
   glVertex2f(-0.68, 0.2);
   glVertex2f(-0.68, -0.3);
   glVertex2f(-0.32, -0.3);
   glVertex2f(-0.32, 0.2);
   glVertex2f(-0.7, 0.2);
   glVertex2f(-0.79, 0.32);
   glVertex2f(-0.86, 0.19);
   glVertex2f(-0.86, 0.-0.27);
   glVertex2f(-0.68, 0.-0.3);
   glVertex2f(-0.68, 0.-0.3);
   glEnd();
   glFlush();


   //Body Outline
   glBegin(GL_LINES);
   glVertex2f(-0.855, 0.2);
   glVertex2f(-0.32, 0.2);
   glEnd();
   glFlush();

   //Window_1 Outline
   glBegin(GL_LINES);
    glVertex2f(-0.82, -0.05);
    glVertex2f(-0.74, -0.05);

    glVertex2f(-0.78, 0.05);
    glVertex2f(-0.78, -0.15);

    glVertex2f(-0.42, -0.12);
    glVertex2f(-0.36, -0.12);

    glVertex2f(-0.39, -0.05);
    glVertex2f(-0.39, -0.20);

    glVertex2f(-0.64, -0.12);
    glVertex2f(-0.58, -0.12);

    glVertex2f(-0.61, -0.05);
    glVertex2f(-0.61, -0.20);

   glEnd();
   glFlush();
    glutSwapBuffers();
    //glutIdleFunc(sun);
}



int main(int argc, char** argv) {

   glutInit(&argc, argv);
   	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
   glutInitWindowSize(1200, 800);
   glutInitWindowPosition(300, 100);
   glutCreateWindow("Village Scene");
   glutDisplayFunc(display);
   init();
   glClearColor(1,1,1,1);
   glutMainLoop();
   return 0;
}
