#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

	int array_1[]{ 1,2,4,5,9,3,6,7,44,55 };
	int array_2[]{ 11,2,44,45,49,43,46,47,55,88 };
	int duplicates[10]{};
	int uniques = 0;

	for (size_t i{ 0 }; i < 10; ++i) {
		for (size_t j{ 0 }; j < 10; ++j) {
			if (array_1[i] == array_2[j]) {
				duplicates[uniques] = array_1[i];
				++uniques;
				break;
			}
		}

	}

	if (uniques == 0) {
		std::cout << "There are 0 common elements";
	}
	else {
		std::cout << "The collection contains " << uniques
			<< " unique numbers, they are : ";

		for (int i = 0; i < uniques; i++) {
			std::cout << duplicates[i] << " ";
		}
	}

	return 0;
}
