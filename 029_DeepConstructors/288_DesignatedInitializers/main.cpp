#include <iostream>

struct Component
{
    double x;
    double y;
    double z;
};

void print_component(const Component& c){
    std::cout << "Component [ x : " << c.x << ", y: " << c.y << " ,z : " << c.z << "] " << std::endl;
}



int main(){

    Component c1{.x = 5.7,.y = 8.2,.z = 5.2};
    Component c2{.x =6.2,.z =8.4};
    Component c3{.y = 6.2,.z = 5.9};
    //Component c4 {.z =5.9 , .x=10.4 , .y =6.89}; // Compiler error as we are switching order

    print_component(c1);
    print_component(c2);
    print_component(c3);
   
    return 0;
}

/*
Variables not declared are going to be initialized to 0
Component [ x : 5.7, y: 8.2 ,z : 5.2]
Component [ x : 6.2, y: 0 ,z : 8.4]
Component [ x : 0, y: 6.2 ,z : 5.9]
*/
