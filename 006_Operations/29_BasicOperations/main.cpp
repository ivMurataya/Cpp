#include <iostream>


int main(){
   
   //Addition
   int number1{2};
   int number2{7};

   int result = number1 + number2;
   std::cout << "result : " << result << std::endl;

    //Subtraction
    result = number2 - number1 ;
   std::cout << "result : " << result << std::endl;

   result = number1 - number2;
   std::cout << "result : " << result << std::endl;

   //Multiplication
   result = number1 * number2;
   std::cout << "result : " << result << std::endl;  


   //Division
   result = number2 / number1;
   std::cout << "result : " << result << std::endl;


   //Modulus
   result = number2 % number1; // 7 % 2
   std::cout << "result : " << result << std::endl; // 1

   result = 31 % 10;
   std::cout << "result : " << result << std::endl; // 1
    return 0;
}

/*
result : 9
result : 5
result : -5
result : 14
result : 3
result : 1
result : 1
*/
