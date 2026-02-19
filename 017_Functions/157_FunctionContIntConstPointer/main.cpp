#include <iostream>

int dog_count{2};

void say_age(const int* const  a); // Declaration

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;
}


void say_age(const int* const a){ // Parameter
    //++(*age); // cant modify the value of the cons int *
    std::cout <<  "Hello , you are " << *a << " years old! &age : " << &a <<  std::endl;//24
    //a = & dog_count; // cant modify the direction of the const pointer
}


/*

age (before call) : 23        &age : 000000FCE12FFC64
Hello , you are 23 years old! &age : 000000FCE12FFC40
age (after call) : 23         &age : 000000FCE12FFC64

*/
