#include <iostream>

//Declaration
double sum(const double(&scores)[10]);


int main() {

	double student_scores[]{ 10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,2.0 };

	double sum_result = sum(student_scores);

	std::cout << "result is : " << sum_result << std::endl;

	return 0;
}

//Definition
double sum(const double(&scores)[10]) { // using a reference its going to force the compiler to use an array of 10 elements not 9 or 11
	double sum{};
	for (size_t i{}; i < std::size(scores); ++i) { // we can use std::size as we are working with a direct reference 
		sum += scores[i];
	}
	return sum;
}

/*
result is : 452

*/
