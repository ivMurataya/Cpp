#include <iostream>
#include <concepts>

//This syntax constrains the auto parameters you pass in 
//to comply with the std::integral concept
std::integral auto add (std::integral auto a,std::integral auto b){
	return a + b;
}


int main(){

    // It shows an error as the function is expection an int vaulue. 
    // Also we are forcing the result to be an int
    std::integral auto y = add(10.3, 2);
    std::cout << y << std::endl;

    //std::floating_point auto x = add(5,8);
  
    return 0;
}
