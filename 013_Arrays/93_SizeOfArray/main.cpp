#include <iostream>

int main(){

    int scores [] {1,2,5};

   
    int count { std::size(scores)}; // std::size( C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl; //as being an int 4*3 = 12
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl; //size of an int = 4
    std::cout << "size of a array scores:  " << (sizeof(scores) / sizeof(scores[0])) << std::endl;
    std::cout << "count : " << count << std::endl;



    
    int count2 {sizeof(scores)/sizeof(scores[0])};


    for(size_t i {0} ; i < count2 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
 
    std::cout  << std::endl;

   //Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }
    
   
    
    return 0;
}
