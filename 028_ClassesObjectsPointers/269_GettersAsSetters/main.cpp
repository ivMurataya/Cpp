#include <iostream>
#include "dog.h"



int main() {

	 Dog dog1("Fluffy", "Shepherd", 2);
	dog1.print_info();

	//std::cout << "Dog Name: " << dog1.name() << std::endl;
	//std::cout << "Dog Age: " << dog1.age() << std::endl;
	//std::cout << "Dog Breed: " << dog1.breed() << std::endl;

	// Modify the data
	std::cout << "Modify the data" << std::endl;

	dog1.age() = 6;
	dog1.name() = "Perry";
	dog1.breed() = "Snazu";
	dog1.print_info();

	//std::cout << "Dog Name: " << dog1.name() << std::endl;
	//std::cout << "Dog Age: " << dog1.age() << std::endl;
	//std::cout << "Dog Breed: " << dog1.breed() << std::endl;



	return 0;
}


/*
Dog (0000001E69AFFBD0) : [ name : Fluffy, breed : Shepherd, age : 2]
Modify the data
Dog (0000001E69AFFBD0) : [ name : Perry, breed : Snazu, age : 6]
*/
