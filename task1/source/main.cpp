#include <iostream>
#include <vector>

#include "../source/tools/Point.hpp"

#include "../source/shape/Shape.h"
#include "../source/shape/Line/Line.h"
#include "../source/shape/Rectangle/Rectangle.h"
#include "../source/shape/Parallelepiped/Parallelepiped.h"
#include "../source/shape/Circle/Circle.h"
#include "../source/shape/Cylinder/Cylinder.h"

int main(int argc, char** argv) {

	shape::Parallelepiped sh({ {1, 2, 3}, {4, 2, 3}, {1, 6, 3}, {1, 2, 7 } });

	shape::show_parameters(sh);

	sh.scale(2, 3, 1);

	show_parameters(sh);

	return 0;
}