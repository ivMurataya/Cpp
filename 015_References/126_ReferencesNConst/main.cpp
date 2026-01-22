#include <iostream>



int main(){

	//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
	const int& ref_age{age};
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference

	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	//ref_age++; //Mofify through reference
	age++; //Mofify through reference

	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
    

   //Simulating reference behavior with pointers
   //const int * const p_age {&age};
   //*p_age = 45;
	
   
    return 0;
}

/*
Non const reference :
age : 27
ref_age : 27

Modify original variable through reference :
age : 28
ref_age : 28
  */
