#include <iostream>
#include "cylinder.h"



int main(){
    Cylinder cylinder1(3.3,10.0);
    std::cout << "Volume of cylinder : " << cylinder1.volume() << std::endl;
    std::cout << "Cylinder default color : " << Cylinder::default_color << std::endl;
    std::cout << "Cylinder default color : " << cylinder1.default_color << std::endl;
	
    return 0;
}

/*
Volume of cylinder : 342.119
Cylinder default color : Red
Cylinder default color : Red

*/
