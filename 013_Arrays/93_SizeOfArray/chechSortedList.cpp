#include <iostream>

int main() {
	//int numbers[] = { 1,2,4,5,1,8,2,3,6,1,4,2 };
	int numbers[] = { 1,2,4,5,6,7,8,9,12,13,14,15};
	constexpr int collection_size = sizeof(numbers) / sizeof(numbers[0]);
	bool sortedBool = true;

	for (size_t i{ 0 }; i < collection_size; ++i) {
		int current = numbers[i];
		//std::cout << current << std::endl;
		for (size_t j{ i }; j < collection_size; ++j) {
			if (current <= numbers[j]) {
				sortedBool = true;
				//std::cout << "true" << std::endl;
			}
			else {
				sortedBool = false;
				//std::cout << "false" << std::endl;
				break;
			}
		}
		if (!sortedBool) break;

	}
	std::cout << std::boolalpha;
	std::cout << "The list is sorted: " << sortedBool << std::endl;
	return 0;
}
