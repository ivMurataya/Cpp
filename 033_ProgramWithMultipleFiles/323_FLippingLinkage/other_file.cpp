#include <iostream>
extern const double distance; // Declaration

void print_distance(){
	//++distance; // Error : can't modify a read only variable.
	std::cout << "distance(some_other_file) : " << distance << std::endl;
	std::cout << "&distance(some_other_file) : " << &distance << std::endl;
}

//External linkage -> internal linkage
// having the stactic declaration the function will no longer be accesible from the exterior
/*
static void some_other_function(){
    std::cout << "Hello there" << std::endl;
}
*/


//Internal linkage for the 
namespace{
     void some_other_function(){
        std::cout << "Hello there" << std::endl;
    }    
}
