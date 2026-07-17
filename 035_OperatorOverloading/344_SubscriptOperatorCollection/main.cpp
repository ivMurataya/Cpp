#include <iostream>
#include "scores.h"


int main() {


	Scores math("Math");
	math.print_info();

	for (size_t i{}; i < 20; ++i) {
		if (i == 0) {
			math[0] = 73.7;
		}
		else {
			math[i] = math[i - 1] + 0.56;
		}
	}

	math.print_info();

	std::cout << "------" << std::endl;

	//Const objecst
	const Scores geo("Geography");
	std::cout << "geo [5] : " << geo[5] << std::endl;

	return 0;
}

/*
Math : [ 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ]
Math : [ 73.7 74.26 74.82 75.38 75.94 76.5 77.06 77.62 78.18 78.74 79.3 79.86 80.42 80.98 81.54 82.1 82.66 83.22 83.78 84.34 ]
------
geo [5] : 0
*/
