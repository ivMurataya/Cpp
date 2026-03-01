#include <iostream>

size_t dog_count{ 0 };// Global scope


unsigned int add_student() {
	static unsigned int student_count{ 0 }; // The scope of this var is in add_student,
	// but it's life time goes beyond the function execution.
	student_count++;
	++dog_count;

	return student_count;
}

void do_something() {
	//--student_count; // Compiler error
	++dog_count;
	std::cout << "dog count : " << dog_count << std::endl;

}

int main() {


	do_something();
	do_something();
	std::cout << "dog count ++" << std::endl;
	dog_count++;
	do_something();



	for (size_t i{}; i < 20; ++i) {
		std::cout << "student count :         " << add_student() << std::endl;
		std::cout << "dog count : " << dog_count << std::endl;

	}

	std::cout << "dog count ++" << std::endl;
	dog_count++;
	do_something();

	return 0;
}

/*

dog count : 1
dog count : 2
dog count ++
dog count : 4
student count :         1
dog count : 5
student count :         2
dog count : 6
student count :         3
dog count : 7
student count :         4
dog count : 8
student count :         5
dog count : 9
student count :         6
dog count : 10
student count :         7
dog count : 11
student count :         8
dog count : 12
student count :         9
dog count : 13
student count :         10
dog count : 14
student count :         11
dog count : 15
student count :         12
dog count : 16
student count :         13
dog count : 17
student count :         14
dog count : 18
student count :         15
dog count : 19
student count :         16
dog count : 20
student count :         17
dog count : 21
student count :         18
dog count : 22
student count :         19
dog count : 23
student count :         20
dog count : 24
dog count ++
dog count : 26

*/
