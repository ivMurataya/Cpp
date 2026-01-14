#include <iostream>



int main(){

	
	bool go {false};

	if(int speed {4};go){
        std::cout << "speed : " << speed << std::endl;
		
		if(speed > 5){
			std::cout << "Slow down!" << std::endl;
		}else{
			std::cout << "All good!" << std::endl;
		}
	}else{
        std::cout << "speed : " << speed << std::endl;
		std::cout << "Stop" << std::endl;
	}

    //std::cout << "Out of the if block , speed : " << speed << std::endl;
   
    return 0;
}

/*
Introduced in C++17

	Allows declaring and initializing variables inside if

	Variable scope is limited to the if and else blocks

	Improves readability and limits variable lifetime

	Commonly used with checks like pointers, iterators, return values

	Initializer runs before the condition is evaluated

	Works the same for switch statements
*/
