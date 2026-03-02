#include "exercise.h"

//Don't modify anything above this line
//Your code should be below this line

unsigned int factorial(unsigned int n) {
   
    if(n > 0){
         std::cout << n << std::endl;
        return n * factorial(n-1);
        
    }
        
   std::cout << n << std::endl;
    return 1;
    
}
//Your code should go above this line
//Don't modify anything below this line
