// chapterOneTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "io.h"


int main()
{
	int x, y, z;
	x = readNum();
	y = readNum();
	z = x + y;
	writeNum(z);
    return 0;
}

