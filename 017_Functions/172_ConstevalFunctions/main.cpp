#include <iostream>

//Evaluate this function at compile time. If you can't 
//do that throw a compiler error
consteval int get_value(int multiplier) {
	return 3 * multiplier;
}

int main() {

	int result = get_value(4);

	int some_var{ 5 };
	//result = get_value(some_var); // this cant be as the CONSTEVAL HAS to be testen on compile time

	std::cout << result;
	return 0;
}

/*
12
*/
