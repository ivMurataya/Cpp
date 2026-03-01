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


	std::cout << "-----------------------------" << std::endl;
	//Capture lists
	double e{ 10 };
	double f{ 20 };
	double x{ 100 };


	auto func4 = [e, f](double ab, double bb) {
		std::cout << "e + f + ab + bb : " << e + f + ab + bb << std::endl;
		};

	func4(x, 100.50);



	return 0;
}

/*

a + b : 30
-----------------------------
Outer value : 42 &outer : 000000234E4FF934
Inner value : 42 &inner : 000000234E4FF954
Outer value : 43 &outer : 000000234E4FF934
Inner value : 42 &inner : 000000234E4FF954
Outer value : 44 &outer : 000000234E4FF934
Inner value : 42 &inner : 000000234E4FF954
Outer value : 45 &outer : 000000234E4FF934
Inner value : 42 &inner : 000000234E4FF954
Outer value : 46 &outer : 000000234E4FF934
Inner value : 42 &inner : 000000234E4FF954
-----------------------------
Outer value : 42 &outer : 000000234E4FF974
Inner value : 42 &inner : 000000234E4FF974
Outer value : 43 &outer : 000000234E4FF974
Inner value : 43 &inner : 000000234E4FF974
Outer value : 44 &outer : 000000234E4FF974
Inner value : 44 &inner : 000000234E4FF974
Outer value : 45 &outer : 000000234E4FF974
Inner value : 45 &inner : 000000234E4FF974
Outer value : 46 &outer : 000000234E4FF974
Inner value : 46 &inner : 000000234E4FF974
-----------------------------
e + f + ab + bb : 230.5

*/
