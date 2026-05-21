#include <iostream>

#include "dog.h"
#include "farm.h"



//First create the Dog Class, the Farm Class would need the dog Class 
// as its not used we can only do a forward declaration so it knows it exist
// the dog.h is later included when used in farm.cpp
int main(){

    Dog dog1("Fluffy");

    Farm farm1;
    farm1.use_dog(dog1);

    
    return 0;
}

/*
Use dog function:
Dog print functtion
Dog [ name : Fluffy]
*/
