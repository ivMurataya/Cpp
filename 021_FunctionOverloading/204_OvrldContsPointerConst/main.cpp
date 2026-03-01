#include <iostream>


// Pointer to int and pointer to const int are diferent 
int max(int*a , int* b){
    std::cout << "max with int* called" << std::endl;
    return (*a > *b)? *a : *b;
}

int max(const int* a, const int* b){
    std::cout << "max with cont int* called" << std::endl;
    return (*a > *b)? *a : *b;
}


/*
Theyre the same definition as we are not modifying direct values
int min(const int* a, const int* b){
    return (*a < *b)? *a : *b;
}
*/


int min(const int* const a, const int* const b){
	std::cout << "&a : " << &a << std::endl;
	std::cout << "&b : " << &b << std::endl;
    return (*a < *b)? *a : *b;
}



int main(){

    std::cout << "------------" << std::endl;
    int a{10};
	int b{12};

	const int c{30};
	const int d{15};

    auto result = max(&a,&b);
    auto result2 = max(&c,&d);

    std::cout << "------------" << std::endl;
    

   	const int e{30};
	const int f{15};

    const int* p_c{&e};
    const int* p_d{&f};

    std::cout << "&p_c : " << &p_c << std::endl;
    std::cout << "&p_d : " << &p_d << std::endl;

    auto result3 = min(p_c,p_d);


    
    return 0;
}

/*

------------
max with int* called
max with cont int* called
------------
&p_c : 00000006100FF798
&p_d : 00000006100FF7B8
&a : 00000006100FF6B0
&b : 00000006100FF6B8  

*/
