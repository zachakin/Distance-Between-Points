#include <iostream>
#include <vector>
#include "Point.h"

/*
CSCI 3010, PE 2
Zach Akin-Amland
Use Makefile to compile. "make" will produce executable "main". Run (on unix systems) with "./main"
*/

int main(int argc, char **argv){
	std::vector<int> c;
	c.push_back(4);
	c.push_back(8);
	c.push_back(12);

	Point p1(4);
	p1.set_coordinates(c);
	Point p2(3);
	Point p3(4);

	std::cout<<std::endl;
	std::cout << "p1 has " << p1.get_dimensions_amount() << " dimensions." << std::endl;
	std::cout << "p2 has " << p2.get_dimensions_amount() << " dimensions." << std::endl;
	std::cout << "p3 has " << p3.get_dimensions_amount() << " dimensions." << std::endl;
	std::cout<<std::endl;

	std::cout << "p1's coordinates are: ";
	p1.printCoordinates();

	std::cout << "p2's coordinates are: ";
	p2.printCoordinates();

	std::cout << "p3's coordinates are: ";
	p3.printCoordinates();
	std::cout<<std::endl;

	std::cout << "dist p1 & p2: " << p1.Distance(p2) << std::endl;
	std::cout << "dist p1 & p3: " << p1.Distance(p3) << std::endl;
	std::cout << "dist p2 & p3: " << p2.Distance(p3) << std::endl;
	std::cout<<std::endl;

    p1.Translate(29);
	std::cout << "p1's coordinates after +29 translation are: ";
	p1.printCoordinates();;
	std::cout << "dist p1 & p2: " << p1.Distance(p2) << std::endl;
	std::cout << "dist p1 & p3: " << p1.Distance(p3) << std::endl;
	std::cout<<std::endl;
    p1.Translate(-10);
	std::cout << "p1's coordinates after -10 translation are: ";
	p1.printCoordinates();
	std::cout << "dist p1 & p2: " << p1.Distance(p2) << std::endl;
	std::cout << "dist p1 & p3: " << p1.Distance(p3) << std::endl;
	std::cout<<std::endl;

	return 0;
}
