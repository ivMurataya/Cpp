#include <iostream>

int main(){

     
    //int * data = new int[10000000000000000]; // 

   
    

   //exception
   
    /*for(size_t i{0} ; i < 100 ; ++i){
        try{
            int * data = new int[1000000000];
        }catch(std::exception& ex){
            std::cout << "  Something went wrong : " << ex.what() << std::endl;
        }
    }*/
    


   //std::nothrow
    for(size_t i{0} ; i < 100 ; ++i){
   
        int * data = new(std::nothrow) int[1000000000]; // you are creating an array of ints of 1'000'000'000 Create an array containing 100,000,000 separate int objects.

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
       
    } 


    std::cout << "Program ending well" << std::endl;
    
    return 0;
}

/*
The memory behavior is the same; the error-handling mechanism is different
    new int[...] throws an exception on failure
    The exception type is std::bad_alloc
    Control jumps immediately to catch
    data is never created if allocation fails
        Failure is non-local control flow
        Requires exception support enabled
        Cleaner logic when failures are rare
        If you forget the try/catch, the program terminates


    new(std::nothrow) never throws
    On failure, it returns nullptr
    Program flow continues normally
    You must manually check the pointer
        No exceptions
        Explicit error checking
        Easier to forget the null check
        Common in low-level or exception-free codebases

*/
