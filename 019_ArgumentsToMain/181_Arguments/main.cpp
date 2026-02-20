#include <iostream>


int main(int argc , char * argv[]){

    std::cout << "We have " << argc << " parameters in our program" << std::endl;

    for(size_t i {0}; i < argc ; ++i){
        std::cout << "parameter [" << i << "] :" <<  argv[i] << std::endl;
    }
    
    return 0;
}

/*

.\rooster.exe jj dj ks kf 

We have 5 parameters in our program
parameter [0] :.\rooster.exe
parameter [1] :jj
parameter [2] :dj
parameter [3] :ks
parameter [4] :kf

*/
