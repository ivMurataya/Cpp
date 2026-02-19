#include <iostream>

void say_age(const int& age); // Declaration

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age << std::endl; //24
    ++age;
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;
}


void say_age(const int& a){ // Parameter
    // ++a; // Cant Modify Value as its supossed to be a conts
    std::cout <<  "Hello , you are " << a << " years old! &age : " << &a <<  std::endl;//24

}


/*

age (before call) : 23        &age : 000000DEEF6FF664
Hello , you are 23 years old! &age : 000000DEEF6FF664
age (after call) : 23         &age : 000000DEEF6FF664
age (after call) : 24         &age : 000000DEEF6FF664

*/
