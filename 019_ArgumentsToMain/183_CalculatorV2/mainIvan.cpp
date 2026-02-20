#include <iostream>

int main(int argc, char* argv[]) {


	// Check if the correct number of arguments are provided (program name, number1, operator, number2)
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <number1> <operator> <number2>" << std::endl;
		std::cerr << "Example: " << argv[0] << " 10 + 5" << std::endl;
		return 1; // Exit with an error code
	}


	double first_number = atof(argv[1]);
	double second_number = atof(argv[3]);
	char c = argv[2][0];

	switch (c) {
	case '+':
		std::cout << first_number << " + " << second_number << " = "
			<< first_number + second_number << std::endl;
		break;

	case '-':
		std::cout << first_number << " - " << second_number << "="
			<< first_number - second_number << std::endl;
		break;

	case 'x':
		std::cout << first_number << " * " << second_number << " = "
			<< first_number * second_number << std::endl;
		break;

	case '/':
		std::cout << first_number << " / " << second_number << " = "
			<< first_number / second_number << std::endl;
		break;

	}
	return 0;
}

/*
.\rooster.exe 9.87 x 65.43
9.87 x 65.43 = 645.794

*/
