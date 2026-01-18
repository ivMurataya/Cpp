#include <iostream>
#include <ctime>

int main() {
	//srand() has to run once per program run
	std::srand(std::time(0)); // Seed


	bool end{ false };


	while (!end) {
		int number1 = std::rand() % 200;
		int number2 = std::rand() % 200;
		int operation = std::rand() % 3;
		int result{ 0 };
		int inputr = { 0 };

		switch (operation) { // [0~10]
		case 0:
			std::cout << "Suma " << number1 << "  " << number2 << std::endl;
			result = number1 + number2;
			break;
		case 1:
			std::cout << "Resta " << number1 << "  " << number2 << std::endl;
			result = number1 - number2;

			break;

		case 2:
			std::cout << "Multiplicacion " << number1 << "  " << number2 << std::endl;
			result = number1 * number2;

			break;

		default:
			std::cout << ", huum, I don't see anything" << std::endl;
		}

		std::cout << "Please type the result: " << std::endl;
		std::cin >> inputr;
		if (inputr != result) {
			std::cout << "Incorrect Result " << std::endl;

		}
		else {
			std::cout << "Correct Result " << std::endl;

		}



		std::cout << "Do you want me to try again ? (Y | N) : ";

		char go_on;
		std::cin >> go_on;

		end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

	}

	std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

	return 0;
}
