#include <iostream>

//Global namespace
double add(double a, double b){
    return a + b;
}

namespace My_Thing{
    double add(double a, double b){
        return a + b - 1;
    }
    
    void do_something(){
        double result = ::add(5,6); // this will call the outside function
        std::cout << "result outside : " << result << std::endl;
        double result2 = add(5, 6); // this will call the namespace function
        std::cout << "result namespace : " << result2 << std::endl;
    }
    
}


int main(){
    My_Thing::do_something();
  
    return 0;
}

/*
result outside : 11
result namespace : 10
*/
