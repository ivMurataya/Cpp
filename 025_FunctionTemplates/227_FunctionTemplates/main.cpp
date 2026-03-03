#include <iostream>
#include <string>

template <typename T>
T maximum(T a , T b){
    return (a > b)? a : b; 
}


int main(){

    int x{5};
    int y{7};

    int* p_x {&x};
    int* p_y{&y};

    std::cout << "px : " << &p_x << std::endl;
    std::cout << "py : " << &p_y << std::endl;

    // this is incorrect as its comparin the value of the DIrections but no the values

    auto result = maximum(p_x,p_y);
    std::cout << "result : " << *result << std::endl;
   
    return 0;
}

/*
px : 000000EC1F4FF5C8
py : 000000EC1F4FF5E8
result : 7

*/
