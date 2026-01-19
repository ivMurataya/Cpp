#include <iostream>


int main(){

//Increment/ decrement pointer addresses manually
	
    int scores[10] {11,12,13,14,15,16,17,18,19,20};

    //scores++;
    
    int * p_score { scores};
    
    
    std::cout << "Values in scores array (p_score pointer increment) : " << std::endl;
	
    std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	std::cout << std::endl;
    

   
	std::cout << std::endl;
	std::cout << "Explicit addition of integer : " << std::endl;
	p_score = scores; // Reset the pointer to the start of the array
	std::cout << "scores[0] : " << *(p_score ) << std::endl; // Moves forward by 4 * sizeof(int) ---->  11
	std::cout << "scores[4] : " << *(p_score + 4) << std::endl; // Moves forward by 4 * sizeof(int) ----> 15
	

    //Can use loops to print these things out : easier
    p_score = scores;
	std::cout << std::endl;
    std::cout << "Pointer arithmetic on p_scores pointer and a for loop: " << std::endl;
    for ( size_t i{0} ; i < std::size(scores) ; ++i){
        std::cout <<"Value : "<< *(p_score + i) << std::endl; // scores[i]
    }
    


    //Can also do arithmetic on the array name
    //just like any pointer.
   
    p_score = scores;
    
	std::cout << std::endl;
    std::cout << "Pointer arithmetic on array name: " << std::endl;
    for ( size_t i{0} ; i < std::size(scores) ; ++i){
        std::cout <<"Value : "<< *(scores + i) << std::endl;
	}
    

    // Can Print the elements in reverse order
    
	std::cout<< std::endl;
    std::cout << "Elements in reverse order with decrementing pointer arithmetic: " << std::endl;
    for ( size_t i{std::size(scores)} ; i > 0 ; --i){
        std::cout <<"Value : "<< *(scores + i -1) << std::endl;	// Here we do the -1 thing, because
																//scores is already pointing to the first
																//element in the array.
    }
    

	//Print in reverse order with -- operator on p_score
    
	std::cout<< std::endl;
    std::cout << "Elements in reverse order -- arithmetic on the p_scores pointer: " << std::endl;
    p_score = scores + std::size(scores) -1;
	for ( size_t i{std::size(scores)} ; i > 0 ; --i){
        std::cout <<"Value : "<< *(p_score--) << std::endl;		// Here we do the -1 thing, because
																//scores is already pointing to the first
																//element in the array.
    }
    

    // Can Print the elements in reverse order with array index
    
	std::cout<< std::endl;
    std::cout << "Elements in reverse order with array index notation: " << std::endl;
    for ( size_t i{std::size(scores)} ; i > 0 ; --i){
        std::cout <<"Value : "<< scores [ i -1] << std::endl;
    }
    

    p_score = scores;
    
    scores[0] = 31; // Array index notation
    *(scores + 1) = 32; // Equivalent to scores[1] = 32 . Pointer arithmetic on array name
    *(p_score + 2) = 33; // Equivalent to scores[2] = 33 . Pointer arithmetic on p_score pointer
    
	std::cout << std::endl;
	std::cout << "Printing out the array after modification of 3 first elements: " << std::endl;
    for ( size_t i{0} ; i < std::size(scores) ; ++i){
        std::cout <<"Value : "<< scores[i] << std::endl;
    }
	
	
   
    return 0;
}


/*
Values in scores array (p_score pointer increment) :
Address : 000000425613FA48 value : 11
Address : 000000425613FA4C value : 12
Address : 000000425613FA50 value : 13
Address : 000000425613FA54 value : 14
Address : 000000425613FA58 value : 15
Address : 000000425613FA5C value : 16
Address : 000000425613FA60 value : 17
Address : 000000425613FA64 value : 18
Address : 000000425613FA68 value : 19
Address : 000000425613FA6C value : 20


Explicit addition of integer :
scores[0] : 11
scores[4] : 15

Pointer arithmetic on p_scores pointer and a for loop:
Value : 11
Value : 12
Value : 13
Value : 14
Value : 15
Value : 16
Value : 17
Value : 18
Value : 19
Value : 20

Pointer arithmetic on array name:
Value : 11
Value : 12
Value : 13
Value : 14
Value : 15
Value : 16
Value : 17
Value : 18
Value : 19
Value : 20

Elements in reverse order with decrementing pointer arithmetic:
Value : 20
Value : 19
Value : 18
Value : 17
Value : 16
Value : 15
Value : 14
Value : 13
Value : 12
Value : 11

Elements in reverse order -- arithmetic on the p_scores pointer:
Value : 20
Value : 19
Value : 18
Value : 17
Value : 16
Value : 15
Value : 14
Value : 13
Value : 12
Value : 11

Elements in reverse order with array index notation:
Value : 20
Value : 19
Value : 18
Value : 17
Value : 16
Value : 15
Value : 14
Value : 13
Value : 12
Value : 11

Printing out the array after modification of 3 first elements:
Value : 31
Value : 32
Value : 33
Value : 14
Value : 15
Value : 16
Value : 17
Value : 18
Value : 19
Value : 20

*/
