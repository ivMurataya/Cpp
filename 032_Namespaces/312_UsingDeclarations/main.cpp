#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"
#include "operations.h"


using Geom::Point; // Just bringing in the name from the namespace
using Geom::Line;
using Geom::Cylinder;

// Is equal to use:
//using namespace Geom;


double add(double a, double b) {
	std::cout << "::add  Normal   ";
	return a + b + 0.555;
}

// Unncomenting these lines will cause an error overloaded function. as it alreay exist in the code
//using Math::add;
//using namespace Math;

int main() {

	Point p1(10, 20);
	Point p2(3.4, 6.1);
	p1.print_info();
	p2.print_info();

	std::cout << "---" << std::endl;

	Line l1(p1, p2);
	l1.print_info();

	std::cout << "---" << std::endl;

	Cylinder c1(1.4, 10);
	std::cout << "c1.volume : " << c1.volume() << std::endl;

	std::cout << "---" << std::endl;


	std::cout << add(7.0, 13.0) << std::endl; // Calling the function from this code
	std::cout << Math_Weighted::add(10, 20) << std::endl;
	std::cout << Math::add(20, 30) << std::endl;

	std::cout << "---" << std::endl;

	//using std::cout;
	///using std::endl;
	using namespace std; // NOT RECOMMENDED!


	cout << "Hello World" << endl;




	return 0;
}

/*

Point [ x : 10, y : 20]
Point [ x : 3.4, y : 6.1]
---
Line from
Point [ x : 10, y : 20]
to :
Point [ x : 3.4, y : 6.1]
---
c1.volume : 61.5752
---
::add  Normal   20.555
Math_Weighted::add  29.2766
Math::add   50
---
Hello World

*/
