#include <iostream>

//Declaration
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b);

int main() {

	//declytpe
	int a{ 9 };
	double b{ 15.8 };



	std::cout << "size : " << sizeof(decltype((a > b) ? a : b)) << std::endl;//4

	decltype((a > b) ? a : b) c{ 7 }; // Declaring other variables through declytype
	std::cout << "c : " << c << std::endl;
	std::cout << "sizeof(c) : " << sizeof(c) << std::endl; // 4


	auto result = maximum(a, b);
	std::cout << "result : " << result << std::endl;
	std::cout << "sizeof(result) :" << sizeof(result) << std::endl;

	return 0;
}

//Definition
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b) {
	return (a > b) ? a : b;
}


/*
size : 8
c : 7
sizeof(c) : 8
result : 15.8
sizeof(result) :8
* /


/*


DECLTYPE CHEATSHEET (Single Script)

decltype(expression)
 Deduces the EXACT type of an expression at compile time
 Keeps const and reference qualifiers


int add(int a, int b) {
	return a + b;
}

int main() {

	// 1. Basic usage
	int x = 10;
	decltype(x) y = 20;   // y has the same type as x (int)

	std::cout << "1) y = " << y << std::endl;


	// 2. Preserves const
	const int a = 5;
	decltype(a) b = 30;   // b is const int

	std::cout << "2) b = " << b << std::endl;


	// 3. Preserves references
	int value = 50;
	int& ref = value;

	decltype(ref) new_ref = value; // type is int&

	new_ref = 100; // modifies value through reference

	std::cout << "3) value = " << value << std::endl;


	// 4. Using decltype with expressions
	int n1 = 3;
	int n2 = 7;

	decltype(n1 + n2) result = n1 + n2; // result is int

	std::cout << "4) result = " << result << std::endl;


	// 5. Using decltype with functions
	decltype(add(2, 3)) sum = add(2, 3); // type deduced from function return

	std::cout << "5) sum = " << sum << std::endl;


	// 6. Difference between decltype(x) and decltype((x))
	int num = 10;

	decltype(num) a1 = num;     // int
	decltype((num)) a2 = num;   // int& (because (num) is an lvalue)

	a2 = 500; // modifies num

	std::cout << "6) num after a2 change = " << num << std::endl;

	return 0;
}
*/
