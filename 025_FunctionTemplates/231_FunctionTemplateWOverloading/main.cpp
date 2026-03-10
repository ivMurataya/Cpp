#include <iostream>
#include <cstring>

//(3)Function template
template <typename T> T maximum(T a, T b) {
	std::cout << "Template overload called(T) " << std::endl;
	return (a > b) ? a : b;
}

//(1)A raw overload will take precedence over any template instance
//if const char* is passed to maximum
const char* maximum(const char* a, const char* b) {
	std::cout << "Raw overload called" << std::endl;
	return (std::strcmp(a, b) > 0) ? a : b;
}


//(2)Overload through templates. Will take precedence over raw T
//if a pointer is passed to maximum

template <typename T> T* maximum(T* a, T* b) {
	std::cout << "Template overload called (T*) " << std::endl;
	return (*a > *b) ? a : b;
}


int main() {

	float c{ 100.2 };
	float d{ 10.2 };
	auto result3 = maximum(c, d);
	std::cout << "result3 : " << result3 << std::endl;
	std::cout << "----------------" << std::endl;

	const char* g{ "wild" };
	const char* h{ "animal" };
	const char* result = maximum(g, h);
	std::cout << "result : " << *result << std::endl;
	std::cout << "----------------" << std::endl;

	int a{ 810 };
	int b{ 23 };
	std::cout << "a& : " << &a << std::endl;
	std::cout << "b& : " << &b << std::endl;
	auto result2 = maximum(&a, &b);
	std::cout << "result : " << *result2 << std::endl;

	return 0;
}

/*
Template overload called(T)
result3 : 100.2
----------------
Raw overload called
result : w
----------------
a& : 0000009B099CF734
b& : 0000009B099CF754
Template overload called (T*)
result : 810
*/
