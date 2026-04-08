#include <iostream>
#include "person.h"


int main(){

    Person p1("John","Snow",25);
    Person p2("Sam","Gray",45);
    Person p3("Johny","Drill",5);
    p1.print_info();
    p2.print_info();
    p3.print_info();

    std::cout << "----" << std::endl;

    Person students[] {p1,p2,p3}; // this are copies
    // this wont print copies
    for(size_t i{}; i < std::size(students); ++i){
        students[i].print_info();
    }

    // this wont
    std::cout << "----" << std::endl;
    //for (Person p : students) { but this will
    for(Person& p : students){
        p.print_info();
    }


   
    return 0;
}

/*
Person object at : 00000047614FF230 [ Last_name : John, First_name :  Snow ,age : 25 , age address : 0000016729E76C40 ]
Person object at : 00000047614FF300 [ Last_name : Sam, First_name :  Gray ,age : 45 , age address : 0000016729E776C0 ]
Person object at : 00000047614FF3D0 [ Last_name : Johny, First_name :  Drill ,age : 5 , age address : 0000016729E76E40 ]
----
Copy constructor called for John
Copy constructor called for Sam
Copy constructor called for Johny
Person object at : 00000047614FF4A0 [ Last_name : John, First_name :  Snow ,age : 25 , age address : 0000016729E76F40 ]
Person object at : 00000047614FF4F8 [ Last_name : Sam, First_name :  Gray ,age : 45 , age address : 0000016729E76DC0 ]
Person object at : 00000047614FF550 [ Last_name : Johny, First_name :  Drill ,age : 5 , age address : 0000016729E76B40 ]
----
Person object at : 00000047614FF4A0 [ Last_name : John, First_name :  Snow ,age : 25 , age address : 0000016729E76F40 ]
Person object at : 00000047614FF4F8 [ Last_name : Sam, First_name :  Gray ,age : 45 , age address : 0000016729E76DC0 ]
Person object at : 00000047614FF550 [ Last_name : Johny, First_name :  Drill ,age : 5 , age address : 0000016729E76B40 ]
*/
