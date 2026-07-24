#include <iostream>
#include "point.h"


int main(){
    Point point1(10.0,10.0);
	Point point2(20.0,20.0);
  
    std::cout << "point1 : " << point1 << std::endl;
	std::cout << "point2 : "  << point2 << std::endl;
	
   
    std::cout << "point1 > point2 : " <<std::boolalpha <<(point1 > point2) << std::endl;
    std::cout << "point1 < point2 : "  << (point1 < point2) << std::endl;
    std::cout << "point1 >= point2 : " << (point1 >= point2) << std::endl;
    std::cout << "point1 <= point2 : " << (point1 <= point2) << std::endl;
    std::cout << "point1 == point2 : " << (point1 ==point2) << std::endl;
    std::cout << "point1 != point2 : " << (point1 != point2) << std::endl;
 
    
    return 0;
}


/*
point1 : Point [ x : 10, y : 10 length : 14.1421]
point2 : Point [ x : 20, y : 20 length : 28.2843]
point1 > point2 : false
point1 < point2 : true
point1 >= point2 : false
point1 <= point2 : true
point1 == point2 : false
point1 != point2 : true

*/
