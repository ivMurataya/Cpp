#include <iostream>

void say_age(const int* age); // Declaration

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;
}


void say_age(const int* a){ // Parameter
    //++(*a); // Would give an error
    std::cout <<  "Hello , you are " << *a << " years old! &age : " << &a <<  std::endl;//24
}

/*

age (before call) : 23        &age : 00000093E077F884
Hello , you are 23 years old! &age : 00000093E077F860
age (after call) : 23         &age : 00000093E077F884

*/
