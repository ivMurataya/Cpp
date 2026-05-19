#include <iostream>
#include "outer.h"


int main(){

    // Outer::Inner( 20.1); Inner is on the private section of outer 
    Outer::Inner inner2{ 5.0 };
    inner2.get_double();

    std::cout << "OUTER " << std::endl;
    Outer outer1(10,20.1);
   
    outer1.do_something();

    
   
    return 0;
}

/*
static_int : 45
OUTER
Created inner object with value : static_int : 45
10
This is inner accessing private parts of outer object, m_var1 : 10
*/
