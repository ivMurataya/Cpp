#include <iostream>


int sum(int a, int b) {
	int result = a + b;
	std::cout << "In : &result(int) :  " << &result << std::endl;
	return result;
}

std::string add_strings(std::string str1, std::string str2) {
	std::string result = str1 + str2;
	std::cout << "In : &result(std::string) :  " << &result << std::endl;
	return result;
}

int main() {



	int x{ 15 };
	int y{ 9 };
	int result = sum(x, y);
	std::cout << "Out : &result(int) :  " << &result << std::endl;
	std::cout << "result : " << result << std::endl;


	std::string in_str1{ "Hello" };
	std::string in_str2{ " World!" };
	std::string result_str = add_strings(in_str1, in_str2);
	std::cout << "Out : &result_str(std::string) :  " << &result_str << std::endl;
	std::cout << "result_str : " << result_str << std::endl;


	return 0;
}

/*
//This address is different
In : &result(int) :   00000069E9AFF994
Out : &result(int) :  00000069E9AFFA04
result : 24

//This address is the same inside outside, the compiler knows it can reuse the address
In : &result(std::string) :       00000069E9AFFAA8
Out : &result_str(std::string) :  00000069E9AFFAA8
result_str : Hello World!

*/

