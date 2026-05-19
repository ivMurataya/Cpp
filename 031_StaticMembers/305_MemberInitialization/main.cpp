#include <iostream>
#include "integer.h"

class Point{
public : 
    Point() {

    }
    Point(double x , double y) : m_x{x} , m_y{y}{
    };

 private :
    /*
    //No initialization at all 
    double m_x;
    double m_y;
    */

    //Explicit assignment
    /* 
    double m_x = 0.1;
    double m_y = 0.1;
    */

   //Braced initializers
   double m_x{0.1};
   double m_y{0.1};

   //
public:
   Integer i{20}; // Default constructo the object

};



int main(){

    Point p1;
    std::cout << "Change value of integer" << std::endl;
    p1.i.set_value(5);

    std::cout << "Value for integer on P1 " <<   p1.i.get_value() << std::endl;
   
    return 0;
}
