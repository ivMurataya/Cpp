#include <iostream>
#include "point.h"
#include "number.h"


double sum(double a, double b){
    return a + b;
}
void use_point(const Point& p){
    std::cout << "Printing the point from use_point func : " << p << std::endl;
}

int main(){

    Number n1(22);
    Number n2(10);

    std::cout << n1 << " - " << n2 << std::endl;
    std::cout << (n1 + Number(100)) << std::endl;

    //double sum0 = sum(n1, n2); // wont compile as sum expects a double not Number
    double result = sum(static_cast<double>(n1),static_cast<double>(n2));
    std::cout << "result : " << result <<  std::endl;
    
    //use_point(n2) // no conversion from Number to point, has to cast 
    use_point(static_cast<Point>(n1));

    return 0;
}

/*
Number : [22] - Number : [10]
Number : [122]
result : 32
Custom conversion from Number to Point
Printing the point from use_point func : Point [ x : 22, y : 22]

*/
