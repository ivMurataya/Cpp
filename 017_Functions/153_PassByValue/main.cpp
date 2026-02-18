#include <iostream>

void say_age(int age){ // Parameter
    ++age;
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;
}

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl;
    say_age(age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl;

    return 0;
}

/*

age (before call) : 23        &age : 000000D2D0CFFC94
Hello , you are 24 years old! &age : 000000D2D0CFFC70
age (after call) : 23         &age : 000000D2D0CFFC94

*/
