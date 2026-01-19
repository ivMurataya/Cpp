#include <iostream>


int main(){

	int scores[10] {11,12,13,14,15,16,17,18,19,20};
    
    int * p_score { scores};
    
    //Print the address
    std::cout << "scores : " << scores << std::endl; // Array
    std::cout << "p_score : " << p_score << std::endl;// Pointer
    std::cout << "&scores[0]  : " << &scores[0] << std::endl;
    
    //Print the content at that address
	std::cout << std::endl;
	std::cout << "Printing out data at array address : " << std::endl;
    std::cout << "*scores : " << *scores << std::endl;
    std::cout << "scores[0] : " << scores[0] << std::endl;
    std::cout << "*p_score : " << *p_score << std::endl;
	std::cout << "p_score[0] : " << p_score[0] << std::endl;


    //Differences
    int number {21};
    p_score = &number;
    
    //scores = &number; // The array name is a pointer, but a special pointer that kind of identifies
                       // the entire array. You'll get the error  : incompatible types in assignment
                      // of 'int*' to 'int[10]'
    
    std::cout << "p_score : " << p_score << std::endl;// Pointer	
    std::cout << "p_score : " << *p_score << std::endl;// Pointer	


	//std::size() doesn't work for raw pointers
	std::cout << "size : " << std::size(scores) << std::endl;
	//std::cout << "size : " << std::size(p_score) << std::endl; // Compiler error.
    std::cout << sizeof(p_score) << std::endl; // 8 
   
    return 0;
}

/*
scores : 000000515696F668
p_score : 000000515696F668
&scores[0]  : 000000515696F668

Printing out data at array address :
*scores : 11
scores[0] : 11
*p_score : 11
p_score[0] : 11
p_score : 000000515696F6A4
p_score : 21
size : 10
8


*/
