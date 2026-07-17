#include <iostream>
#include "point.h"

int main(){


    Point p1(10,10);
    Point p2(20,20);
    Point p3(5,5);

    std::cout << "p1 + p2 : " << (p1 +  p2) << std::endl; // (30,30)
    std::cout << "p2 - p3 : " << (p2 - p3) << std::endl; // (15,15)

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;



    std::cout << "------" << std::endl;

    p1+=p2;
    p2-=p3;
    
    std::cout << "point1 : " <<  p1 << std::endl; // (30,30)
    std::cout << "point2 : " << p2 << std::endl; // (15,15)


    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;

    return 0;
}

/*
p1 + p2 : Point [ x : 30, y : 30]
p2 - p3 : Point [ x : 15, y : 15]
Point [ x : 10, y : 10]
Point [ x : 20, y : 20]
Point [ x : 5, y : 5]
------
point1 : Point [ x : 30, y : 30]
point2 : Point [ x : 15, y : 15]
Point [ x : 30, y : 30]
Point [ x : 15, y : 15]
Point [ x : 5, y : 5]
*/
