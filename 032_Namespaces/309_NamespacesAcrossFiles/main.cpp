#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"


int main(){

    Geom::Point p1(10,20);
    Geom::Point p2(3.4,6.1);
    p1.print_info();
    p2.print_info();

    std::cout << "---" << std::endl;

    Geom::Line l1(p1,p2);
    l1.print_info();

    std::cout << "---" << std::endl;

    Geom::Cylinder c1(1.4,10);
    std::cout << "c1.volume : " << c1.volume() << std::endl;


    return 0;
}

/*
Point [ x : 10, y : 20]
Point [ x : 3.4, y : 6.1]
---
Line from
Point [ x : 10, y : 20]
to :
Point [ x : 3.4, y : 6.1]
---
c1.volume : 61.5752
*/
