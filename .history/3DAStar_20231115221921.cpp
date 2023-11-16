/**
 * The main function of the 3D A* pathfinding program.
 * Creates a Star object, finds a path, animates the path, and waits for user input before exiting.
 * @param argc The number of command line arguments.
 * @param argv An array of command line argument strings.
 * @return An integer representing the exit status of the program.
 */

#include "stdafx.h"
#include "Star.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	Star star;
	star.findpath();
	star.animate();
	system("pause");
	return 0;
}


