//Eduardo Barajas
//
//firstL.cpp

#include <iostream>
#include "fonts.h"
#include <GL/glx.h>

using namespace std;

void showName()
{
	Rect r;
	r.bot = 740;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ff0000, "Eduardo Barajas");
}

void drawBox(int x, int y)
{
    	static float angle = 0.0;
    	glColor3ub(255,0,0);
    	glPushMatrix();
	glTranslatef(x,y,0.0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50.0,-50.0,0.0);
	angle = angle + 2.5;
	glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(0, 100);
		glVertex2f(100, 100);
		glVertex2f(100, 0);
	glEnd();
	Rect r;
	r.bot = 50;
	r.left = 50;
	r.center = 1;
	ggprint8b(&r, 16, 0x00ffffff, "Eduardo Barajas");
	glPopMatrix();
}
