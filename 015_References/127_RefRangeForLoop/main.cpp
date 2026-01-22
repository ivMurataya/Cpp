#include <iostream>


int main(){

    int scores[] {1,2,3,4,5,6,7,8,9,10};
    
    //Printing positions
    std::cout << std::endl;
	
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;


    for (auto score : scores) {
        score = score * 10;
    }

    std::cout << "Scores : ";
    for (auto score : scores) {
        std::cout << " " << score;
    }
    std::cout << std::endl;


   for ( auto& score : scores){
        score = score * 10;
    }

    //Printing after change
     std::cout << std::endl;
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;
    
    return 0;
}
/*
Scores :  1 2 3 4 5 6 7 8 9 10
Scores :  1 2 3 4 5 6 7 8 9 10
Scores :  10 20 30 40 50 60 70 80 90 100
*/
