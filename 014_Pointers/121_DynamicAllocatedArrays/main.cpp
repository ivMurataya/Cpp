#include <iostream>

int main(){

    // Number of elements to allocate dynamically
    const size_t size{10};
    
    // =====================================================
    // DYNAMICALLY ALLOCATED ARRAYS (Heap memory)
    // =====================================================
    // Dynamic arrays are allocated at runtime using `new[]`
    // They live on the heap and must be manually released
    // using `delete[]` to avoid memory leaks.
    // =====================================================

    // Allocates an array of 10 doubles on the heap.
    // IMPORTANT:
    //  - Memory is allocated, but values are NOT initialized.
    //  - Contents are indeterminate (garbage values).
    double *p_salaries { new double[size] };

    // Allocates an array of 10 integers on the heap using nothrow.
    //  - `std::nothrow` prevents exceptions if allocation fails.
    //  - The empty {} initializes all elements to 0.
    int *p_students { new(std::nothrow) int[size]{} };

    // Allocates an array of 10 doubles.
    //  - First 5 elements are initialized to 1,2,3,4,5.
    //  - Remaining elements are value-initialized to 0.
    double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5} };

    // =====================================================
    // NULL POINTER CHECK
    // =====================================================
    // When using `std::nothrow`, allocation failure returns nullptr.
    // Always check before using the memory.
    if(p_scores){

        // Size of the pointer itself (not the array!)
        // This will typically be 8 bytes on a 64-bit system.
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;

        std::cout << "Successfully allocated memory for scores." << std::endl;
        
        // Accessing dynamically allocated arrays
        // Can use:
        //  - Array subscript notation: p_scores[i]
        //  - Pointer arithmetic: *(p_scores + i)
        for(size_t i{}; i < size ; ++i){
            std::cout << "value : " << p_scores[i]
                      << " : "
                      << *(p_scores + i)
                      << std::endl; 
        }
    }

    // =====================================================
    // DEALLOCATING DYNAMIC MEMORY
    // =====================================================
    // Every `new[]` must have a matching `delete[]`.
    // Failing to do this causes memory leaks.
    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    // =====================================================
    // STATIC ARRAYS vs DYNAMIC ARRAYS
    // =====================================================
    std::cout << "=====================================" << std::endl;

    // STATIC ARRAY
    //  - Size is known at compile time.
    //  - Lives on the stack.
    //  - Automatically destroyed when going out of scope.
    int scores[10] {1,2,3,4,5,6,7,8,9,10};

    // std::size works because this is a true array
    std::cout << "scores size : " << std::size(scores) << std::endl;

    for(auto s : scores){
        std::cout << "value : " << s << std::endl;
    }

    // =====================================================
    // DYNAMIC ARRAY (Heap)
    // =====================================================
    // Allocated on the heap.
    // The variable `p_scores1` is just a pointer.
    int* p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};

    // std::size does NOT work here because p_scores1 is a pointer,
    // not an actual array.
    // The size information is lost.
    // std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl;

    /*
    Range-based for loops do NOT work directly on pointers
    because the compiler does not know the array size.
    for(auto s : p_scores1){
        std::cout << "value : " << s << std::endl;
    }
    */

    // Missing delete[] here would cause a memory leak
    delete [] p_scores1;
    p_scores1 = nullptr;

    return 0;
}
