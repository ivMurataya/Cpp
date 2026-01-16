#include <iostream>

int main(){


    for(double multiplier{4}; auto i : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << "result : " << ( i * multiplier) << std::endl;
    }

   
    return 0;
}

/*

result : 4
result : 8
result : 12
result : 16
result : 20
result : 24
result : 28
result : 32
result : 36
result : 40
  */
