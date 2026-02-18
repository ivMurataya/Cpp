#include <iostream>

void say_age(int* a); // Function declaration: expects a pointer to int

int main() {

    int age{ 23 }; // Local variable stored in main's stack frame

    // Print value of age and its memory address
    std::cout << "age (before call) : " << age << " &age : " << &age << std::endl; // 23

    // Pass the address of age to the function (pointer to age)
    say_age(&age); // Argument: address of age

    // After function call, age has been modified through the pointer
    std::cout << "age (after call) : " << age << " &age : " << &age << std::endl; // 24

    return 0;
}


void say_age(int* a) { // Parameter: pointer to int (receives address of age)

    // Dereference pointer and increment the value stored at that address
    ++(*a);  // modifies the original variable in main

    // *a gives the value of age
    // &a gives the address of the pointer variable itself (NOT the address of age)
    std::cout << "Hello, you are " << *a   << " years old! &a : " << &a << std::endl; // 24
}


/*

age (before call) : 23       &age : 000000AF48EFFC24
Hello, you are 24 years old! &a : 000000AF48EFFC00
age (after call) : 24        &age : 000000AF48EFFC24

*/
