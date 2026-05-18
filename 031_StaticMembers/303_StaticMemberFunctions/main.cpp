#include <iostream>
#include "point.h"


int main(){

   std::cout << "Point count : " << Point::get_point_count() << std::endl;

    Point p1{6,7};
    Point p2{ 8,9 };

    std::cout << "Point count : " << p1.get_point_count() << std::endl;
    p1.print_info(p2);
    p1.print_info(p1) ;

 
    return 0;
}
/*

Point count : 0
Constructing Point [ m_x : 6, m_y : 7]
Constructing Point [ m_x : 8, m_y : 9]
Point count : 2
Point : [ m_x : 8, m_y : 9]
Point : [ m_x : 6, m_y : 7]
Destroying point object.  Current point count : 1
Destroying point object.  Current point count : 0

*/
