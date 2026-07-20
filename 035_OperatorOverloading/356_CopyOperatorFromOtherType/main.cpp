#include <iostream>
#include "point.h"
#include "car.h"

int main(){

    
    Point p1(10,10,10);
    Car c1("red",200.0);


    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "Udatinv values "  << std::endl;

    p1 = c1;

    std::cout << "p1 : " << p1 << std::endl;
    

    return 0;
}

/*

p1 : Point [ x : 10, y : 10 data : 10]
Udatinv values


p1 : Point [ x : 200, y : 200 data : 200]*/
