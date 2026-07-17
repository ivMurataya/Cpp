#include <iostream>
#include "point.h"

int main(){

    Point p1(10,20);
    Point p2(3,4);
    p1.print_info();


    // As it implemented as a member function, the firts operator will always be the object itself
    // this is a weird implementation of the function
    // can be used in two ways
    //p1 << std::cout;  
    //p1.operator<<(std::cout);

    std::cout << p1 << "  -  " << p2 << std::endl;
   
    return 0;
}

/*
Point [ x : 10, y : 20]
Point [ x : 10, y : 20]  -  Point [ x : 3, y : 4]
*/
