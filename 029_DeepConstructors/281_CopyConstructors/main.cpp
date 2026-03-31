#include <iostream>
#include "person.h"


int main(){

    Person  p1("John","Snow",25);
    p1.print_info();

    //Create a person copy
    Person p2(p1);
    p2.print_info();

    std::cout << "-------" << std::endl;

    p1.set_age(30);
    p1.print_info();
    p2.print_info();
   
    return 0;
}

/*
Person object at : 00000032712FFA60 [ Last_name : John, First_name :  Snow ,age : 25 , age address : 00000157F8836D10 ]
Copy constructor called
Person object at : 00000032712FFB30 [ Last_name : John, First_name :  Snow ,age : 25 , age address : 00000157F8837110 ]
-------
Person object at : 00000032712FFA60 [ Last_name : John, First_name :  Snow ,age : 30 , age address : 00000157F8836D10 ]
Person object at : 00000032712FFB30 [ Last_name : John, First_name :  Snow ,age : 25 , age address : 00000157F8837110 ]

*/
