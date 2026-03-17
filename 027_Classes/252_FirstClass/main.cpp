#include <iostream>

const double PI{ 3.1415926535897932384626433832795 };

class Cylinder {
	// Member Variables 
public:
	double base_radius{ 1.0 };
	double height{ 1.0 };
private:
	int identifier{ 9 };

	// Member Methods
public:
	double volume() {
		return PI * base_radius * base_radius * height;
	}
};


int main() {

	Cylinder cylinder1;
	std::cout << "Base: " << cylinder1.base_radius << std::endl;
	std::cout << "Heigt: " << cylinder1.height << std::endl;
	//std::cout << "ID : " << cylinder1.identifier << std::endl;


	std::cout << "Volume 1: " << cylinder1.volume() << std::endl;

	cylinder1.base_radius = 3.0;
	cylinder1.height = 2.0;
	std::cout << "Base: " << cylinder1.base_radius << std::endl;
	std::cout << "Heigt: " << cylinder1.height << std::endl;
	std::cout << "Volume 1: " << cylinder1.volume() << std::endl;

	Cylinder cylinder2;
	cylinder2.base_radius = 5.0;
	cylinder2.height = 3.0;
	std::cout << "Base: " << cylinder2.base_radius << std::endl;
	std::cout << "Heigt: " << cylinder2.height << std::endl;
	std::cout << "Cylinder2 Volume: " << cylinder2.volume() << std::endl;


	return 0;
}

/*

Base: 1
Heigt: 1
Volume 1: 3.14159
Base: 3
Heigt: 2
Volume 1: 56.5487
Base: 5
Heigt: 3
Cylinder2 Volume: 235.619

*/
