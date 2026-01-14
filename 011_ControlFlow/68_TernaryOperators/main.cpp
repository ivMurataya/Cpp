#include <iostream>


int main(){

	int max{};
    
    int a{375};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */


    // Ternary operator
    max = (a > b)? a : b; 
    std::cout << "max : " << max << std::endl;

    // Ternary cout  
    std::cout << "Max value : " << ((a > b) ? a : b) << std::endl;
	
   
    return 0;
}
