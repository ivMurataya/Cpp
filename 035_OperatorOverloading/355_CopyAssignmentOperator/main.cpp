#include <iostream>
#include "point.h"

int main(){

    
    Point p1(10,10,10);
    Point p2(20,20,20);
    Point p77(3,3,3);

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;

    std::cout << "-----" << std::endl;

    //Assignment
    //p1 = p2 = p77;
    //p1.operator=(p2).operator=(p77);
    p1.operator=(p2.operator=(p77));

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;

    //Change data
    p1.set_data(55); // p data is a pointer to int

    std::cout << "-----------" << std::endl;
    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
   
    std::cout << "----- POINTER------" << std::endl;

   //
   
   Point p3(30,30,30);
   Point p4{p3};

  std::cout << "p3 : " << p3 << std::endl;
   std::cout << "p4 : " << p4 << std::endl;

   p3.set_data(77);
   p4.set_data(99);

   std::cout << "-----" << std::endl;
   std::cout << "p3 : " << p3 << std::endl;
   std::cout << "p4 : " << p4 << std::endl;


   std::cout << "Done!" << std::endl;
   //

    
    return 0;
}


/*

p1 : Point [ x : 10, y : 10 data : 10]
p2 : Point [ x : 20, y : 20 data : 20]
-----
Copy assignment operator called
Copy assignment operator called
p1 : Point [ x : 3, y : 3 data : 3]
p2 : Point [ x : 3, y : 3 data : 3]
-----------
p1 : Point [ x : 3, y : 3 data : 55]
p2 : Point [ x : 3, y : 3 data : 3]
----- POINTER------
Copy constructor called to copy point Point [ x : 30, y : 30 data : 30]
p3 : Point [ x : 30, y : 30 data : 30]
p4 : Point [ x : 30, y : 30 data : 30]
-----
p3 : Point [ x : 30, y : 30 data : 77]
p4 : Point [ x : 30, y : 30 data : 99]
Done!

*/
