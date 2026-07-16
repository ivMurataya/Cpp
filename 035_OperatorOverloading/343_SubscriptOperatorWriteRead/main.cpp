#include <iostream>
#include "point.h"


int main(){

    Point p1(10,20);

    p1.print_info();


    //Changing the data
    p1[0] = 35.6;
    p1[1] = 23.9;

    p1.print_info();
    return 0;
}

/*
Point [ x : 10, y : 20]
Point [ x : 35.6, y : 23.9]
*/
