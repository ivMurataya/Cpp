#include <iostream>


int* max_return_pointer(int* a, int* b)
{
	if (*a > *b) {
		return a;
	}
	else {
		return b;
	}
}

int* max_input_by_value(int a, int b)
{
	if (a > b) {
		return &a; // Pointer to local variable returned
	}
	else {
		return &b; // Pointer to local variable returned
	}
}


int* sum(int* a, int* b) {
	int result = *a + *b;
	return &result;// Pointer to local variable returned
}


int main() {

	int x{ 56 };
	int y{ 45 };
	int* p_max = max_return_pointer(&x, &y);

	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
	std::cout << "*p_max : " << *p_max << std::endl;


	++(*p_max);

	std::cout << "-----" << std::endl;
	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
	std::cout << "*p_max : " << *p_max << std::endl;



	std::cout << "-----" << std::endl;
	// Return a local pointer, gives a warning
	int x1{ 56 };
	int y1{ 45 };
	int* p_sum = sum(&x1, &y1);
	std::cout << *p_sum << std::endl;


	std::cout << "-----" << std::endl;
	// Return a local pointer, gives a warning
	int x2{ 56 };
	int y2{ 45 };
	int* p_sum2 = max_input_by_value(x2, y2);
	std::cout << *p_sum2 << std::endl;



	std::cout << "Done!" << std::endl;

	return 0;
}

/*
* 
x : 56
y : 45
*p_max : 56
-----
x : 57
y : 45
*p_max : 57

-----
101

-----
56
Done!

*/
