#include <iostream>

template <typename T, typename P>
auto maximum(T a, P b) {
	return (a > b) ? a : b;
}

int main() {

	//Largest type is going to be deduced as return type

	auto max1 = maximum('e', 33); // int return type deduced
	std::cout << "max1 : " << max1 << std::endl;
	std::cout << "size of max1 : " << sizeof(max1) << std::endl;

	auto max2 = maximum('b', 124.89); // double return type deduced
	std::cout << "max2 : " << max2 << std::endl;
	std::cout << "size of max2 : " << sizeof(max2) << std::endl;


	auto max3 = maximum(true, false); // char return type deduced
	std::cout << "max3 : " << max3 << std::endl;
	std::cout << "size of max3 : " << sizeof(max3) << std::endl;


	return 0;
}

/*

max1 : 101   101 ascii for char E
size of max1 : 4   Int Result
max2 : 124.89
size of max2 : 8   Double Result
max3 : 1
size of max3 : 1    Bool Result

*/

