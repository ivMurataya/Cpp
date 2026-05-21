#include <iostream>
#include "utility.h"

// we have the same age variable in tho different files, but as they are inline fuctions the scope is only for that file
void print_age_utility1();
void print_age_utility2();

int main(){

   print_age_utility1();
   print_age_utility2();


   std::cout << "Add Fnction 3,5: " << add(3, 5) << std::endl;
   std::cout << "Add Function 30,30: " << add(30, 30) << std::endl;
   
    return 0;
}

/*

Printing from utility1 :
age : 12
&age : 00007FF6A337E000

Printing from utility2 :
age : 12
&age : 00007FF6A337E000

Add Fnction 3,5: 11.1
Add Function 30,30: 60


*/
