#include <iostream>



int main() {
	/*
	Lambda function signature :
								[capture list] (parameters) ->return type{
										// Function body
								}
	*/




	//Declaring a lambda function and calling it through a name

	auto func = []() {
		std::cout << "Hello World!" << std::endl;
		};
	func();
	func();
	std::cout << "-----------------------------" << std::endl;


	//Declare a lambda function and call it directly

	[]() {
		std::cout << "Second Example" << std::endl;
		}();
	std::cout << "-----------------------------" << std::endl;




	//Lambda function that takes parameters


	[](double a, double b) {
		std::cout << "Third Example a + b : " << (a + b) << std::endl;
		}(10.0, 50.0);
	std::cout << "-----------------------------" << std::endl;




	auto func1 = [](double a, double b) {
		std::cout << "Forth a + b : " << (a + b) << std::endl;
		};

	func1(10, 20);
	func1(5, 7);
	std::cout << "-----------------------------" << std::endl;




	//Lambda function that returns something

	auto result = [](double a, double b) {
		return a + b;
		}(50, 60);

	std::cout << "Fifth result : " << result << std::endl;

	//std::cout << "result : " << result << std::endl;
	std::cout << "Fifth result : " << [](double a, double b) {
		return a + b;
		}(10, 60) << std::endl;

	std::cout << "-----------------------------" << std::endl;




	auto func2 = [](double a, double b) {
		return a + b;
		};

	auto result1 = func2(23, 7);
	auto result2 = func2(9, 45);

	std::cout << "six result1 : " << result1 << std::endl;
	std::cout << "six result2 : " << result2 << std::endl;
	std::cout << "six direct call : " << func2(5, 2) << std::endl;


	std::cout << "-----------------------------" << std::endl;


	//Explicitly specify the return type
	auto func3 = [](double a, double b)-> int {
		return a + b;
		};

	auto func4 = [](double a, double b) {
		return a + b;
		};

	double a{ 6.9 };
	double b{ 3.5 };

	auto result3 = func3(a, b);
	auto result4 = func4(a, b);

	std::cout << "result3 : " << result3 << std::endl;
	std::cout << "result4 : " << result4 << std::endl;
	std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; // 4
	std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl; // 8


	std::cout << "Done!" << std::endl;

	return 0;
}

/*

Hello World!
Hello World!
-----------------------------
Second Example
-----------------------------
Third Example a + b : 60
-----------------------------
Forth a + b : 30
Forth a + b : 12
-----------------------------
Fifth result : 110
Fifth result : 70
-----------------------------
six result1 : 30
six result2 : 54
six direct call : 7
-----------------------------
result3 : 10
result4 : 10.4
sizeof(result3) : 4
sizeof(result4) : 8
Done!

*/
