#include <iostream>
#include <string_view>

void say_my_name(std::string_view name){
    std::cout << "Hello your name is : " << name << std::endl;
}

void say_my_name2(std::string & name) {
    std::cout << "bye your name is : " << name << std::endl;
}

int main(){

    std::string some_name{"John"};

    say_my_name("John");
    say_my_name(some_name);
    say_my_name(std::string_view("Samuel"));

    // say_my_name2("John");  // Fail bc its sending a char array in a function that expects a reference 
    say_my_name2(some_name);
    //say_my_name2(std::string_view("Samuel"));

   
    return 0;
}

/*
Hello your name is : John
Hello your name is : John
Hello your name is : Samuel
bye your name is : John

*/
