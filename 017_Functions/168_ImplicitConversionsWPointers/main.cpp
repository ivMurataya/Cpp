#include <iostream>

void print_sum(int* param1, int* param2){
	std::cout << "sum : " << (*param1 + *param2) << std::endl;
}

int main(){

    int a{3};
    int b{12};

    // We can call the function as the compiller is pointng to  a int pointer Size8, not a double pointer to double 
    //double c{ 3.0 };
    //double d{ 12.9 };

    int * x{ };
    std::cout << "int pointer : " << sizeof(*x) << std::endl;


    double* y{ };
    std::cout << "double pointer : " << sizeof(*y) << std::endl;

    print_sum(&a,&b);
    //print_sum(&c, &d);

   
    return 0;
}

/*

int pointer : 4
double pointer : 8
sum : 15

*/
