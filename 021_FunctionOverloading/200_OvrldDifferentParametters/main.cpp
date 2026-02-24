#include <iostream>


int max(int a, int b) {
	std::cout << "int overload called" << std::endl;
	return (a > b) ? a : b;
}

double max(double a, double b) {
	std::cout << "double overload called" << std::endl;
	return (a > b) ? a : b;
}

double max(int a, double b) {
	std::cout << "(int,double) overload called" << std::endl;
	return (a > b) ? a : b;
}

double max(double a, int b) {
	std::cout << "(double,int) overload called" << std::endl;
	return (a > b) ? a : b;
}

double max(double a, int b, int c) {
	std::cout << "(double,int,int) overload called" << std::endl;
	return a;
}

std::string_view  max(std::string_view a, std::string_view b) {
	std::cout << "(string_view,string_view) overload called" << std::endl;
	return (a > b) ? a : b;
}

int main() {

	int x{ 4 };
	int y{ 9 };
	double a{ 5.4 };
	double b{ 7.4 };

	auto result1 = max(x, y);
	auto result2 = max(a, b);
	auto result3 = max(x, a);
	auto result4 = max(b, x);
	auto result5 = max(b, x, y);
	max("Hello", "World");

	return 0;
}

/*
int overload called
double overload called
(int,double) overload called
(double,int) overload called
(double,int,int) overload called
(string_view,string_view) overload called
*/
