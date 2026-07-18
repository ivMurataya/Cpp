#include <iostream>
#include "point.h"

int main(){

    Point p1(10,10);



    std::cout << "p1 : " << p1++ << std::endl; // (10,10); this will return a Point Objecct
    std::cout << "p1 : " << p1 << std::endl; // (11,11)
    ++p1; // this is a void function, it only add +1 to the current point 
    std::cout << "p1 : " << (p1) << std::endl; // (11,11)

    std::cout << "-------------" << std::endl;
    Point p2(10, 10);

    std::cout << "p2 : " << p2-- << std::endl; // (10,10); this will return a Point Objecct
    std::cout << "p2 : " << p2 << std::endl; // (9,9)
    --p2; // this is a void function, it only add +1 to the current point 
    std::cout << "p2 : " << (p2) << std::endl; // (8,8)
   
    return 0;
}

/*

p1 : Point [ x : 10, y : 10]
p1 : Point [ x : 11, y : 11]
p1 : Point [ x : 12, y : 12]
-------------
p2 : Point [ x : 10, y : 10]
p2 : Point [ x : 9, y : 9]
p2 : Point [ x : 8, y : 8]

*/
