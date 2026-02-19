#include <iostream>

void increment(int& value);
void print_out(const int& value);

int main() {

	/*
	int int_var{3};

	increment(int_var);
	print_out(int_var);
	*/

	double double_var{ 3.6 };
	std::cout << "1 "<< & double_var << std::endl;


	int data = double_var;
	std::cout << "2 " << &data << std::endl;


	increment(data);
	print_out(double_var);
	std::cout << "3 " << &double_var << std::endl;


	return 0;
}

void increment(int& value) {
	value++;
	std::cout << "value incremented to : " << value << std::endl;
	std::cout << "& value incremented to : " << &value << std::endl;

}

void print_out(const int& value) {
	std::cout << "value : " << value << std::endl;
	std::cout << "& value : " << &value << std::endl; //Creates a temporary pointer to cast from dpuble to int

}

/*
* 
1 000000F930CFF8B8
2 000000F930CFF8D4
value incremented to : 4
& value incremented to : 000000F930CFF8D4
value : 3
& value : 000000F930CFF8E4
3 000000F930CFF8B8

*/
