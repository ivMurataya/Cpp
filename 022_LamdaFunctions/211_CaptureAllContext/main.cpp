#include <iostream>


int main() {

	//Capture everything by value

	int c{ 42 };

	auto func = [=]() {
		std::cout << "Inner value :         " << c << std::endl;
		};

	for (size_t i{}; i < 5; ++i) {
		std::cout << "Outer value : " << c << std::endl;
		func();
		++c;
	}



	std::cout << "-----------------------------" << std::endl;


	//Capturing all reference
	int e{ 42 };
	int d{ 7 };

	auto func2 = [&]() {
		std::cout << "Inner value :         " << e << std::endl;
		std::cout << "Inner value(d) : " << d << std::endl;
		};

	for (size_t i{}; i < 5; ++i) {
		std::cout << "Outer value : " << e << std::endl;
		func2();
		++e;
		--d;
	}

	return 0;
}

/*

Outer value : 42
Inner value :         42
Outer value : 43
Inner value :         42
Outer value : 44
Inner value :         42
Outer value : 45
Inner value :         42
Outer value : 46
Inner value :         42
-----------------------------
Outer value : 42
Inner value :         42
Inner value(d) : 7
Outer value : 43
Inner value :         43
Inner value(d) : 6
Outer value : 44
Inner value :         44
Inner value(d) : 5
Outer value : 45
Inner value :         45
Inner value(d) : 4
Outer value : 46
Inner value :         46
Inner value(d) : 3

 */
