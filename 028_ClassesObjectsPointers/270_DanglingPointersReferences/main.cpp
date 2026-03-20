#include <iostream>
#include "dog.h"

int main(){

    Dog dog1("Fluffy","Shepherd",2);

    /*
    Will crash bc we are returning a reference to a local variable that will be dead once excecuted
    const std::string& str_ref = dog1.compile_dog_info();
    std::cout << " info : " << str_ref << std::endl;
    */

    
    // wont crash as point to a something that no longer exist but retunr wrong info
   unsigned int* int_ptr = dog1.jumps_per_minute();
   std::cout << "jumps_per_minute : " << *int_ptr << std::endl;

    std::cout << "Done!" << std::endl;
    return 0;
}
