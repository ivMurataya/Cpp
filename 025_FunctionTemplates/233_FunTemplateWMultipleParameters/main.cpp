#include <iostream>

/*
//Problematic : return depends on the order of the template arguments : BAD!
template <typename T , typename P>
P   maximum( T a, P b){
	return ((a > b) ? a : b);
}
*/


// The order of the parameters matters, alwasys have to have them in order when calling and give a ReturnType
template <typename ReturnType, typename T, typename P>
//template < typename T,typename ReturnType , typename P>   
//template < typename T, typename P,typename ReturnType > 
ReturnType   maximum(T a, P b) {
	return ((a > b) ? a : b);
}


int main() {

	int max1 = maximum<int, char, long>('c', 120L);
	std::cout << "max1:  " << max1 << std::endl;


	int max2 = maximum<int, char>('d', 12L);
	std::cout << "max2:  " << max2 << std::endl;


	int max3 = maximum<int >('e', 14L);
	std::cout << "max3:  " << max3 << std::endl;

	// The compiler soent know how to deduce the return type
	// int max4 = maximum('e', 14L);


	int a{ 5 };
	double b{ 6.7 };

	auto result = maximum <double>(a, b);
	std::cout << "max4:  " << result << std::endl;
	std::cout << "sizeof(result) : " << sizeof(result) << std::endl;

	return 0;
}

/*
max1:  120
max2:  100
max3:  101
max4:  6.7
sizeof(result) : 8
*/
