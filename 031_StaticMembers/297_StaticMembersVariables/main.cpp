#include <iostream>
#include "point.h"

// Declare the class Point, with all the constructors
// Declare a static variable to count how many point we have, this is a variable assigned to the class not the objetc



int main() {
	
	//Print the point count in our program only if the variable is public
	//std::cout << "Point count : " << Point::m_point_count << std::endl; //0

	Point p1(10.0, 20.1);
	Point p2(5.3, 9.2);


	p1.print_info();
	p2.print_info();
	//std::cout << "Point count : " << Point::m_point_count << std::endl; //2
	std::cout << "Point count Function: " << p1.get_point_count() << std::endl; //1

	Point points[] {Point(1,1),Point(),Point(4)};

	std::cout << "Point count : " << p1.get_point_count() << std::endl; //4

	return 0;
}


/*

Point Constructor Called
Point Constructor Called
Point  [ &m_x : 0000006D548FFA78, &m_y : 0000006D548FFA80]
Point  [ &m_x : 0000006D548FFAA8, &m_y : 0000006D548FFAB0]
Point count Function: 2
Point Constructor Called
Point Constructor Called
Point Constructor Called
Point count : 5

*/
