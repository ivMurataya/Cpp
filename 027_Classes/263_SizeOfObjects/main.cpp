#include <iostream>

class Dog{
    public : 
     Dog() = default;
     void prin_info(){

     }
     void do_something(){

     }
     // The total size is going to be aprox the size of all vaars 24
     private :
      size_t leg_count; //8
      size_t arm_count; //8
      int * p_age; // 8
};


int main(){

    Dog dog1;
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(Dog) : " << sizeof(dog1) << std::endl;

    std::string name{"I am the king of the universe!"};

    std::cout << "sizeof(name) : " << sizeof(name) << std::endl;
   
    return 0;
}

/*
sizeof(size_t) : 8
sizeof(int*) : 8
sizeof(Dog) : 24
sizeof(name) : 40

*/
