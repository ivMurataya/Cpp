#include <iostream>
#include <string>

template <typename T> T maximum( T a, T b){
    return (a > b) ? a : b;
}

int main(){

	int a{10};
	int b{23};
	double c{34.7};
	double d{23.4};
	std::string e{"hello"};
	std::string f{"world"};


	auto max1 = maximum(a, b);
	std::cout << "max1 : " << max1 << std::endl;
	std::cout << "-----------------------" << std::endl;
	auto max2 = maximum(c, d);
	std::cout << "max2 : " << max2 << std::endl;
	std::cout << "-----------------------" << std::endl;
	auto max3= maximum(e, f);
	std::cout << "max3 : " << max3 << std::endl;
	std::cout << "-----------------------" << std::endl;

    //Explicit template arguments
	// this one works as int can be casted to double
    auto max = maximum<double>(a,c);
	// but cant cast string to double
	//auto max = maximum<double>(a, f);

    std::cout << "max : " << max << std::endl;
   
    return 0;
}

/*
max1 : 23
-----------------------
max2 : 34.7
-----------------------
max3 : world
-----------------------
max : 34.7
*/
