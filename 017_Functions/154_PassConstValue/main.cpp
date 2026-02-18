#include <iostream>

void say_age(const int age); // Declaration
// const here protects only the copy, not the original variable.

int main(){

    int age1{23}; // Local
    std::cout << "age (before call) : " << age1 << "&age : " << &age1 << std::endl;
    say_age(age1); // Argument
    std::cout << "age (after call) : " << age1 << "&age : " << &age1 <<  std::endl;
    ++age1;
    std::cout << "age (after call) : " << age1 << "&age : " << &age1 << std::endl;


    return 0;
}


void say_age(const int age){ // Parameter
    //++age; we cant modify this value as its passed as a const
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;
}



/*

age (before call) : 23&age : 0000005F054FF6E4
Hello , you are 23 years old! &age : 0000005F054FF6C0
age (after call) : 23&age : 0000005F054FF6E4
age (after call) : 24&age : 0000005F054FF6E4

*/
