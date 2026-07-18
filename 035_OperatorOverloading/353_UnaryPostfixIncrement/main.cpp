#include <iostream>
#include "point.h"

int main(){

    Point p1(10,10);
    std::cout << "p1 : " << p1++ << std::endl; // (10,10); this will return a Point Objecct
    std::cout << "p1 : " << p1 << std::endl; // (11,11)
    ++p1; // this is a void function, it only add +1 to the current point 
    std::cout << "p1 : " << (p1) << std::endl; // (11,11)

   
    return 0;
}

/*

p1 : Point [ x : 10, y : 10]
the value is printed but will be seen on next 
p1 : Point [ x : 11, y : 11]

*/
