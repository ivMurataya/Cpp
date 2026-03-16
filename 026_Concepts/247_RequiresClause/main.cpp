#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires (T t) {
	sizeof(T) <= 4; // Simple requirement : Only enforces syntax (as when checking that we could multply numbers but no strings)
	requires sizeof(T) <= 4; // Nested requirements
};


template<TinyType T>
void func(T) {
	std::cout << "Tiny type\n";
}


//---------------------------------------------------------------------------



//Compound requirement
template <typename T>
concept Addable = requires (T a, T b) {
	//noexcept is optional
	{ a + b } -> std::convertible_to<int>; //Compound requirement
	//Checks if a + b is valid syntax (could use strings), doesn't throw expetions(optional) , and the result
	//is convertible to int(optional)
};


Addable auto add(Addable auto a, Addable auto b) {
	return a + b;
}


int main() {

	func(10);     // int (usually 4 bytes) → OK
	//func(10.5); // double (8 bytes) → ERROR

	//--------------------------------------------------------

	double x{ 67.1 };
	double y{ 56.2 };

	//std::string x{"Hello"};
	//std::string y{"World"};

	//auto s = x + y;

	auto result = add(x, y);
	std::cout << "result : " << result << std::endl;
	std::cout << "sizeof(result) : " << sizeof(result) << std::endl;


	return 0;
}

/*
Tiny type
result : 123.3
sizeof(result) : 8

*/
