#include <iostream>
#include <array>


//double sum( double scores[], size_t count){
double sum(double* scores, size_t count) {

	double score_sum{};

	// std::cout << "sizeof(scores)  : " << sizeof(scores) << std::endl; // print 8 , the size of a pointer
	// std::cout << "sizeof(int*) : " << sizeof (int *) << std::endl; // print 8 , the size of a pointer
	//size_t arr_size = std::size(scores); // Cant use this sintax as we are referencing a pointer

	for (size_t i{ 0 }; i < count; ++i) {
		score_sum += scores[i];
	}
	return score_sum;
}



int main() {
	double my_scores[]{ 10.5,34.3,4.8,6.5 };
	std::cout << "sizeof(my_scores) : " << sizeof(my_scores) << std::endl;
	std::cout << "size array my_scores : " << std::size(my_scores) << std::endl;



	double result = sum(my_scores, std::size(my_scores));
	std::cout << "result : " << result << std::endl;

	return 0;
}

/*
sizeof(my_scores) : 32
size array my_scores : 4
result : 56.1
*/
