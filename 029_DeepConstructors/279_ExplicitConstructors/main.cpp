#include <iostream>
#include "square.h"

//Is square1 > to square2 ? true or false
bool compare( const Square& square1 ,const Square& square2){
    std::cout <<  std::endl;
    std::cout << "S1 Surface: " << square1.surface() << std::endl;
    std::cout << "S2 Surface: " << square2.surface() << std::endl;

    return (square1.surface() > square2.surface()) ? true : false;
}

int main(){

    Square s1(100.0);
    Square s2(20.0);

    std::cout << std::boolalpha;
    std::cout << "s1 > s2 : " << compare(s1,s2) << std::endl; // false


    std::cout << "------------------------------"<< std::endl; 

    //Implicit conversions
    std::cout << "s1 > 45.9 : " << compare(s1,45.9) << std::endl; // false


   
    return 0;
}
