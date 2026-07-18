#include <iostream>
#include "number.h"



int main(){

    Number n1(22);
    std::cout << "n1 : " << n1 << std::endl;
    std::cout << "n1 + 2  : " << (n1 + 2) << std::endl;
    std::cout << "2 + n1 : " << (2 + n1) << std::endl;
    std::cout << "42 - n1 : " << (42 - n1) << std::endl;
   

    return 0;
}

/*
n1 : Number : [22]
n1 + 2  : Number : [24]
2 + n1 : Number : [24]
42 - n1 : Number : [20]
*/
