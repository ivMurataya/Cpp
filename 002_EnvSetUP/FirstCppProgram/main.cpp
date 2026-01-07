#include <iostream>
#include "dog.h"

int main(){

    int age{ 25 };
    int net_worth{ 2500 };
    std::cout << "Number1" << std::endl;
    std::cout << "Number2" << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "NetWorth : " << net_worth << std::endl;
    std::cout << "Number3" << std::endl;
    say_hello();

    return 0;
}