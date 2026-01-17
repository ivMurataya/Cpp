#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

	std::srand(std::time(0)); // Seed

	//------------------------  0 ~ RAND_MAX
	std::cout << "0 ~ RAND_MAX " << std::endl;
	int random_num = std::rand();
	std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
	random_num = std::rand();
	std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX

	// ------------------------- Generate random numbers in a loop
	std::cout << "random numbers in a loop 0 ~ RAND_MAX " << std::endl;
	int random_num2;
	for (size_t i{ 0 }; i < 20; ++i) {
		random_num2 = std::rand();
		std::cout << "random_num2 " << i << " : " << random_num2 << std::endl; // 0 ~ RAND_MAX       
	}

	//------------------------- Generate a range between 0 and 10
	std::cout << "0 ~ 10 " << std::endl;
	int random_num3 = std::rand() % 11;                  // [ 0 ~10]
	for (size_t i{ 0 }; i < 20; ++i) {
		random_num3 = std::rand() % 11;
		std::cout << "random_num3 " << i << "  :   " << random_num3 << std::endl; // 0 ~ RAND_MAX       
	}

	//------------------------- [1~10]
	std::cout << "1 ~ 10 " << std::endl;
	int random_num4 = std::rand() % 10 + 1;
	for (size_t i{ 0 }; i < 20; ++i) {
		random_num4 = std::rand() % 10 + 1;
		std::cout << "random_num4 " << i << "  :   " << random_num4 << std::endl; // 0 ~ RAND_MAX       
	}

	return 0;
}
