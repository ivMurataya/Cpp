#include <iostream>
#include <string>

// input1 is an input parameter (const reference, read-only, avoids copy)
// input2 is an input parameter (passed by value, makes a copy)
// output is an output parameter (non-const reference, will be modified)
void max_str(const std::string& input1, const std::string input2,
	std::string& output)
{
	// Compare the two input values
	if (input1 > input2) {
		// Assign result to output parameter
		output = input1;
	}
	else {
		output = input2;
	}
}


// input1 and input2 are input parameters (passed by value)
// output is an output parameter (passed by reference so it can be modified)
void max_int(int input1, int input2, int& output) {
	if (input1 > input2) {
		output = input1;
	}
	else {
		output = input2;
	}
}


// input1 and input2 are input parameters (passed by value)
// output is an output parameter (passed by pointer, must dereference to modify)
void max_double(double input1, double input2, double* output) {
	if (input1 > input2) {
		*output = input1;   // modify the value at the given address
	}
	else {
		*output = input2;
	}
}


int main() {

	// -------- STRING EXAMPLE --------

	std::string out_str;
	std::string string1("Cassablanca");
	std::string string2("Bellevue");

	// out_str will receive the result
	max_str(string1, string2, out_str);

	std::cout << "max_str : " << out_str << std::endl;


	// -------- INT EXAMPLE --------

	int out_int;
	int in1{ 45 };
	int in2{ 723 };

	max_int(in1, in2, out_int);

	std::cout << "max_int : " << out_int << std::endl;


	// -------- DOUBLE EXAMPLE --------

	double out_double;
	double in_double1{ 45.8 };
	double in_double2{ 76.9 };

	// pass address because function expects a pointer
	max_double(in_double1, in_double2, &out_double);

	std::cout << "max_double : " << out_double << std::endl;

	return 0;
}

/*
max_str : Cassablanca
max_int : 723
max_double : 76.9
*/
