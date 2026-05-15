#include <iostream>
#include "point.h"

int main(){

    Point p1(1,2); // The most vexing parse
    p1.initialize_pointer(3,4);
    p1.print_info();

    p1.m_point4.print_info();
    p1.m_point5.print_info();



 
    return 0;
}

/*

Point constructor called
Point constructor called
Point constructor called
Point constructor called
Point  [ m_x : 3, m_y : 4]
Point  [ m_x : 1, m_y : 2]
Point  [ m_x : 5, m_y : 6]
Point  [ m_x : 7, m_y : 8]


*/
