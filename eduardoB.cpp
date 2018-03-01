//Eduardo Barajas
//
//firstL.cpp

#include <iostream>
#include "fonts.h"

using namespace std;

void showName()
{
	Rect r;
	//glClear(GL_COLOR_BUFFER_BIT);	
	r.bot = 740;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ff0000, "Eduardo Barajas");
}
