#include <iostream>


template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b) {
	return (a > b) ? a : b;
}

template < typename T, typename P, typename ReturnType = double>
ReturnType minimum(T a, P b) {
	return (a < b) ? a : b;
}

int main() {

	double a{ 6 };
	double b{ 9.5 };


	//pasing returnType as the 1st parameter
	auto result1 = maximum <int, double, int>(a, b);
	std::cout << "result : " << result1 << std::endl;
	std::cout << "sizeof(result) : " << sizeof(result1) << std::endl;//4


	//passing returntype as 3rd parameter
	auto result = minimum <int, double, bool>(a, b);
	std::cout << "result : " << result << std::endl;
	std::cout << "sizeof(result) : " << sizeof(result) << std::endl;//4

	//Using default type double
	auto result3 = minimum <int, double>(a, b);
	std::cout << "result : " << result3 << std::endl;
	std::cout << "sizeof(result) : " << sizeof(result3) << std::endl;//8

	return 0;
}

/*

result : 9
sizeof(result) : 4
result : 1
sizeof(result) : 1
result : 6
sizeof(result) : 8

*/
