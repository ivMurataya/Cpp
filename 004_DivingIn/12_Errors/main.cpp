#include <iostream>

int main(){
   
   //Compile time error
    std::cout << "Hello Word!" << std::endl;  // syntax error: 'int' should be preceded by ';'
   
        
   //Run time error
   int value = 7/0;
   std::cout << "value : " << value << std::endl;
   // divide or mod by zero
    return 0;
}
