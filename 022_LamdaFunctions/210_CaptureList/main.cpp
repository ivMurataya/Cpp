#include <iostream>

int main() {

	//Capture lists

	double a{ 10 };
	double b{ 20 };

	auto func1 = [a, b]() {
		std::cout << "a + b : " << a + b << std::endl;
		};
	func1();


	std::cout << "-----------------------------" << std::endl;


	//Capturing by value

	int c{ 42 };

	auto func2 = [c]() {
		std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
		};

	for (size_t i{}; i < 5; ++i) {
		std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
		func2();
		++c;
	}


	std::cout << "-----------------------------" << std::endl;

	//Capture by reference
	int d{ 42 };

	auto func3 = [&d]() {
		std::cout << "Inner value : " << d << " &inner : " << &d << std::endl;
		};

	for (size_t i{}; i < 5; ++i) {
		std::cout << "Outer value : " << d << " &outer : " << &d << std::endl;
		func3();
		++d;
	}

	return 0;
}

/*
a + b : 30
-----------------------------
Outer value : 42 &outer : 0000009F76B8FB54
Inner value : 42 &inner : 0000009F76B8FB74
Outer value : 43 &outer : 0000009F76B8FB54
Inner value : 42 &inner : 0000009F76B8FB74
Outer value : 44 &outer : 0000009F76B8FB54
Inner value : 42 &inner : 0000009F76B8FB74
Outer value : 45 &outer : 0000009F76B8FB54
Inner value : 42 &inner : 0000009F76B8FB74
Outer value : 46 &outer : 0000009F76B8FB54
Inner value : 42 &inner : 0000009F76B8FB74
-----------------------------
Outer value : 42 &outer : 0000009F76B8FB94
Inner value : 42 &inner : 0000009F76B8FB94
Outer value : 43 &outer : 0000009F76B8FB94
Inner value : 43 &inner : 0000009F76B8FB94
Outer value : 44 &outer : 0000009F76B8FB94
Inner value : 44 &inner : 0000009F76B8FB94
Outer value : 45 &outer : 0000009F76B8FB94
Inner value : 45 &inner : 0000009F76B8FB94
Outer value : 46 &outer : 0000009F76B8FB94
Inner value : 46 &inner : 0000009F76B8FB94
*/
