#include <iostream>

void say_age(int& age); // Declaration

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;
}


void say_age(int& a){ // Parameter
    ++a; 
    std::cout <<  "Hello , you are " << a << " years old! &age : " << &a <<  std::endl;//24

}

/*

age (before call) : 23        &age : 000000F344AFF604
Hello , you are 24 years old! &age : 000000F344AFF604
age (after call) : 24         &age : 000000F344AFF604

*/
