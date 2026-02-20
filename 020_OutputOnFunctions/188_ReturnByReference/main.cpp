#include <iostream>

int& max_return_reference(int& a, int& b)
{
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}


// Function error as its returning a local variable that expires once the funcition die
int& sum(int& a, int& b) {
	int result = a + b;
	return result;// Reference to local variable returned
}

// Function error as its returning a local variable that expires once the funcition die
int& max_input_by_value(int a, int b)
{
	if (a > b) {
		return a; // Reference to local variable returned
	}
	else {
		return b; // Reference to local variable returned
	}
}


int main() {


	int x{ 14 };
	int y{ 9 };
	int& ref_max = max_return_reference(x, y); // Reference
	int val = max_return_reference(x, y); // Copy

	std::cout << "First Example: " << std::endl;
	std::cout << "ref_max : " << ref_max << std::endl;
	std::cout << "val : " << val << std::endl;
	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;

	ref_max++;

	std::cout << "----- " << std::endl;
	std::cout << "ref_max : " << ref_max << std::endl; // 15
	std::cout << "val : " << val << std::endl; // 14
	std::cout << "x : " << x << std::endl; // 15
	std::cout << "y : " << y << std::endl; // 9




	std::cout << "Second Example: " << std::endl;
	//int x{14};
	//int y{9};
	int& result = sum(x, y); // Reference
	std::cout << "Incorrect result : " << result << std::endl;


	std::cout << "Third Example: " << std::endl;
	//int x{14};
	//int y{9};
	int& result2 = max_input_by_value(x, y); // Reference
	std::cout << "result : " << result2 << std::endl;



	std::cout << "Done!" << std::endl;

	return 0;
}

/*
First Example:
ref_max : 14
val : 14
x : 14
y : 9
-----
ref_max : 15
val : 14
x : 15
y : 9


Second Example:
Incorrect result : -858993460


Third Example:
result : -1868357680
Done!

*/
