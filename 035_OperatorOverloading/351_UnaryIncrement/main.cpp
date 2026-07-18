#include <iostream>
#include "point.h"

int main(){

    Point p1(10,10);
    std::cout << "p1 : " << p1 << std::endl;

   // ++p1;
   p1.operator++();

    std::cout << "p1 : " << p1 << std::endl; // 11
    std::cout << "----------"<< std::endl; // 11


    for(size_t i{}; i < 20 ; ++i){
        ++p1;
        std::cout << "p1 : " << p1 << std::endl;
    }
    
    return 0;
}

/*
p1 : Point [ x : 10, y : 10]
p1 : Point [ x : 11, y : 11]
----------
p1 : Point [ x : 12, y : 12]
p1 : Point [ x : 13, y : 13]
p1 : Point [ x : 14, y : 14]
p1 : Point [ x : 15, y : 15]
p1 : Point [ x : 16, y : 16]
p1 : Point [ x : 17, y : 17]
p1 : Point [ x : 18, y : 18]
p1 : Point [ x : 19, y : 19]
p1 : Point [ x : 20, y : 20]
p1 : Point [ x : 21, y : 21]
p1 : Point [ x : 22, y : 22]
p1 : Point [ x : 23, y : 23]
p1 : Point [ x : 24, y : 24]
p1 : Point [ x : 25, y : 25]
p1 : Point [ x : 26, y : 26]
p1 : Point [ x : 27, y : 27]
p1 : Point [ x : 28, y : 28]
p1 : Point [ x : 29, y : 29]
p1 : Point [ x : 30, y : 30]
p1 : Point [ x : 31, y : 31]

a*/
