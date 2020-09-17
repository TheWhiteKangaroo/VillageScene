#include<cstdio>
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;
float x,y,i;
GLfloat boatPosition = -0.5f;
GLfloat boatSpeed= 0.05f;
GLfloat fishPosition = -1.7f;
GLfloat fishPosition2 = 1.7f;
GLfloat fishSpeed = 0.05f;


void boatUpdate(int value)
{
    if(boatPosition < -1.9)
    {
        boatPosition = 1.1f;
    }
    boatPosition-=boatSpeed;

    if(fishPosition > 1)
    {
        fishPosition = -1.7f;
    }
    fishPosition+=fishSpeed;

    if(fishPosition2 < -1)
    {
        fishPosition2=1.7f;
    }
    fishPosition2-=fishSpeed;

    glutPostRedisplay();
    glutTimerFunc(100,boatUpdate,0);
}
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
   glPushMatrix();
   glTranslatef(fishPosition, 0.05f, 0.0f);

   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(0.95f,0.25f);
   glVertex2f(0.85f,0.19f);
   glVertex2f(0.90f,0.21f);
   glVertex2f(0.80f,0.25f);
   glVertex2f(0.90f,0.29f);
   glVertex2f(0.85f,0.31f);
   glEnd();
   glPopMatrix();
   glFlush();


   //Fish Tail
   glPushMatrix();
   glTranslatef(fishPosition, 0.05f, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(0.81f,0.25f);
   glVertex2f(0.77f,0.30f);
   glVertex2f(0.77f,0.20f);
   glEnd();
   glPopMatrix();
   glFlush();


   //Fish_2
   glPushMatrix();
   glTranslatef(fishPosition, 0.05f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(0.75f,0.25f);
   glVertex2f(0.65f,0.19f);
   glVertex2f(0.70f,0.21f);
   glVertex2f(0.60f,0.25f);
   glVertex2f(0.70f,0.29f);
   glVertex2f(0.65f,0.31f);
   glEnd();
   glPopMatrix();
   glFlush();



   //Fish Tail
   glPushMatrix();
   glTranslatef(fishPosition, 0.05f, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(0.61f,0.25f);
   glVertex2f(0.57f,0.30f);
   glVertex2f(0.57f,0.20f);
   glEnd();
   glPopMatrix();
   glFlush();



   //Fish_3
   glPushMatrix();
   glTranslatef(fishPosition, 0.05f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(0.60f,0.15f);
   glVertex2f(0.50f,0.09f);
   glVertex2f(0.55f,0.11f);
   glVertex2f(0.45f,0.15f);
   glVertex2f(0.55f,0.19f);
   glVertex2f(0.50f,0.21f);
   glEnd();
   glPopMatrix();
   glFlush();


   //Fish Tail
   glPushMatrix();
   glTranslatef(fishPosition, 0.05f, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(0.46f,0.15f);
   glVertex2f(0.42f,0.20f);
   glVertex2f(0.42f,0.10f);
   glEnd();

   glPopMatrix();
   glFlush();



   //Fish
   glPushMatrix();
   glTranslatef(fishPosition2, 0.0f, 0.0f);

   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(-0.95f,0.25f);
   glVertex2f(-0.85f,0.19f);
   glVertex2f(-0.90f,0.21f);
   glVertex2f(-0.80f,0.25f);
   glVertex2f(-0.90f,0.29f);
   glVertex2f(-0.85f,0.31f);
   glEnd();
   glPopMatrix();
   glFlush();


   //Fish Tail
   glPushMatrix();
   glTranslatef(fishPosition2, 0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(-0.81f,0.25f);
   glVertex2f(-0.77f,0.30f);
   glVertex2f(-0.77f,0.20f);
   glEnd();
   glPopMatrix();
   glFlush();


   //Fish_2
   glPushMatrix();
   glTranslatef(fishPosition2, 0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(-0.75f,0.25f);
   glVertex2f(-0.65f,0.19f);
   glVertex2f(-0.70f,0.21f);
   glVertex2f(-0.60f,0.25f);
   glVertex2f(-0.70f,0.29f);
   glVertex2f(-0.65f,0.31f);
   glEnd();
   glPopMatrix();
   glFlush();



   //Fish Tail
   glPushMatrix();
   glTranslatef(fishPosition2, 0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(-0.61f,0.25f);
   glVertex2f(-0.57f,0.30f);
   glVertex2f(-0.57f,0.20f);
   glEnd();
   glPopMatrix();
   glFlush();



   //Fish_3
   glPushMatrix();
   glTranslatef(fishPosition2, 0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(255,255,51);
   glVertex2f(-0.60f,0.15f);
   glVertex2f(-0.50f,0.09f);
   glVertex2f(-0.55f,0.11f);
   glVertex2f(-0.45f,0.15f);
   glVertex2f(-0.55f,0.19f);
   glVertex2f(-0.50f,0.21f);
   glEnd();
   glPopMatrix();
   glFlush();


   //Fish Tail
   glPushMatrix();
   glTranslatef(fishPosition2, 0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,51);
   glVertex2f(-0.46f,0.15f);
   glVertex2f(-0.42f,0.20f);
   glVertex2f(-0.42f,0.10f);
   glEnd();

   glPopMatrix();
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

   //Way
   glBegin(GL_QUADS);
    glColor3ub(169,169,169);
   glVertex2f(-0.40, -0.33);
   glVertex2f(0.20, -0.6);
   glVertex2f(-0.1, -0.65);
   glVertex2f(-0.60, -0.33);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glVertex2f(0.20, -0.6);
   glVertex2f(0.20, -1);
   glVertex2f(-0.1, -1);
   glVertex2f(-0.1, -0.65);
   glEnd();
   glFlush();

   //Fenching
   glBegin(GL_QUADS);
   glColor3ub(139,0,0);
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



    //Trees
   //Tree_1
   glBegin(GL_QUADS);
   glColor3ub(139,69,19);
   glVertex2f(-0.42,0.5);
   glVertex2f(-0.38, 0.5);
   glVertex2f(-0.38, 0.75);
   glVertex2f(-0.42, 0.75);
   glEnd();
   glFlush();

   glBegin(GL_POLYGON);
   glColor3ub(107,142,35);
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


   //Body Boat
   glPushMatrix();
   glTranslatef(boatPosition, 0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(0, 0, 0);
   glVertex2f(0,0.45);
   glVertex2f(0.1,0.35);
   glVertex2f(0.4,0.35);
   glVertex2f(0.5,0.45);
   glEnd();


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



   //Flag
   glBegin(GL_QUADS);
   glColor3ub(0, 106, 78);
   glVertex2f(0.18,0.58);
   glVertex2f(0.38,0.58);
   glVertex2f(0.38,0.74);
   glVertex2f(0.18,0.74);
   glEnd();



     //Rod
   glBegin(GL_QUADS);
   glColor3ub(169,169,169);
   glVertex2f(0.35,0.55);
   glVertex2f(0.35,0.75);
   glVertex2f(0.34,0.75);
   glVertex2f(0.34,0.55);
   glEnd();

   glPopMatrix();
   glFlush();

     //Body Boat_2
   glPushMatrix();
   glTranslatef(boatPosition, 0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(0, 0, 0);
   glVertex2f(0.7,0.45);
   glVertex2f(0.8,0.35);
   glVertex2f(1.1,0.35);
   glVertex2f(1.2,0.45);
   glEnd();


    //Hood
   glBegin(GL_POLYGON);
   glColor3ub(255, 223, 70);
   glVertex2f(0.76,0.45);
   glVertex2f(1.12,0.45);
   glVertex2f(1.1,0.45);
   glVertex2f(1.08,0.55);
   glVertex2f(0.82,0.55);
   glVertex2f(0.8,0.45);
   glEnd();



   //Flag
   glBegin(GL_QUADS);
   glColor3ub(0, 106, 78);
   glVertex2f(0.88,0.58);
   glVertex2f(1.08,0.58);
   glVertex2f(1.08,0.74);
   glVertex2f(0.88,0.74);
   glEnd();



     //Rod
   glBegin(GL_QUADS);
   glColor3ub(169,169,169);
   glVertex2f(1.05,0.55);
   glVertex2f(1.05,0.75);
   glVertex2f(1.04,0.75);
   glVertex2f(1.04,0.55);
   glEnd();

   glPopMatrix();
   glFlush();

   //Shop
   glBegin(GL_QUADS);
   glVertex2f(0.48,0.02);
   glVertex2f(1,-0.05);
   glVertex2f(1,-0.30);
   glVertex2f(0.66,-0.29);

   glVertex2f(0.5,-0.45);
   glVertex2f(0.5,0.00);
   glVertex2f(0.51,0.00);
   glVertex2f(0.51,-0.45);

    glVertex2f(0.47,0.00);
   glVertex2f(0.47,0.01);
   glVertex2f(1,-0.10);
   glVertex2f(1.0,-0.09);

   glVertex2f(0.65,-0.20);
   glVertex2f(0.65,-0.21);
   glVertex2f(1,-0.30);
   glVertex2f(1,-0.29);

   glVertex2f(0.48,0.02);
   glVertex2f(0.66,-0.20);
   glVertex2f(0.66,-0.21);
   glVertex2f(0.48,0.01);

   glVertex2f(0.7,-0.75);
   glVertex2f(0.7,-0.20);
   glVertex2f(0.71,-0.20);
   glVertex2f(0.71,-0.75);
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

	glPushMatrix();
	glTranslatef(0.8,0.9,0.0);
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();
    glutSwapBuffers();
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
    glutTimerFunc(1000, boatUpdate, 0);
    glutIdleFunc(display);
   glutMainLoop();
   return 0;
}
