#include <iostream>

// Template Function with References
template <typename T> const T& maximum(const T& a, const T& b); // Declaration

//template <typename T> T maximum(T a, T b); // Declaration

int main(){

    double a {23.5};
    double b {51.2};

    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
    std::cout << "Out - &b: " << &b << std::endl; // 0x111abc

    auto result = maximum(a,b);
    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
    std::cout << "Out - &b: " << &b << std::endl; // 0x111abc

    return 0;
}


//Definition
template <typename T> const T& maximum(const T& a, const T& b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    std::cout << "In - &b: " << &b << std::endl; // // 0x111abc

    return (a > b ) ? a : b ;
}

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}
*/


/* 

Out - &a: 0000004BEB2FF9E8
Out - &b: 0000004BEB2FFA08
In - &a: 0000004BEB2FF9E8
In - &b: 0000004BEB2FFA08
Out - &a: 0000004BEB2FF9E8
Out - &b: 0000004BEB2FFA08

*/
