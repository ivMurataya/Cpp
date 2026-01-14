#include <iostream>


int main(){
   
   constexpr bool condition {false};

   if constexpr (condition){
       std::cout << "Condition is true" << std::endl;
   }else{
       std::cout << "Condition is false" << std::endl;
   }
    return 0;
}

/*
if constexpr — key points (C++17+)

    Compile-time conditional

    Only the selected branch is compiled

    Unselected branch is discarded, even if it contains invalid code

    Condition must be evaluable at compile time

    Mainly used in templates

    Not suitable for runtime conditions

    Can replace many template specializations and SFINAE

    Different from if (runtime) and ternary ?: (runtime)

    Requires C++17 or later

    Allows multiple statements per branch
*/
