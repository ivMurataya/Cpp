#include <iostream>


void print_age_1();
void print_age_2();

void print_distance_1();
void print_distance_2();



int main(){

    print_age_1();
    print_age_2();

    std::cout << "----" << std::endl;

    print_distance_1();
    print_distance_2();
   
    return 0;
}

/*

age(utility1) :
age  : 12
&age : 00007FF6DE48E000
age(utility2) :
age  : 12
&age : 00007FF6DE48E000
----
distance(utility1) :
distance : 21.9
&distance : 00007FF6DE48E008
distance(utility2) :
distance : 23.9
&distance : 00007FF6DE48E018
*/

/*
// GLOBAL / NAMESPACE SCOPE

inline int x{1};
// Shared across all .cpp files
// Same memory address everywhere

static int y{1};
// Private to this .cpp file
// Each .cpp gets its own copy


// FUNCTIONS

inline void func(){}
// Can be defined in multiple files
// Acts like one shared function

static void helper(){}
// Only visible inside this .cpp
*/
