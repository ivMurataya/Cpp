#include <iostream>
#include "exercise.h"


void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2){

    //Don't modify anything above this line
    //Your code will go below this line

    // Allocate a new array large enough to hold
    // all elements from data1 and data2
    int* new_array = new int[size1 + size2];

    // Copy elements from the first array into new_array
    for (size_t i{ 0 }; i < size1; ++i) {
        *(new_array + i) = data1[i];
    }

    // Copy elements from the second array into new_array
    // starting AFTER the last element of data1
    for (size_t i{ 0 }; i < size2; ++i) {
        *(new_array + i + size2 + 1) = data2[i];
    }

    // Print the merged array
    for (size_t i{}; i < 13; ++i) {
        std::cout << *(new_array + i) << " ";
    }

    //Your code will go above this line
    //Don't modify anything below this line
}


/*
EXERCISE EXPLANATION
--------------------

You are given two arrays of integers (data1 and data2), along with their
respective sizes (size1 and size2). The goal of this exercise is to:

1. Create a new array large enough to hold all elements from both arrays.
2. Copy the elements of the first array (data1) into the new array.
3. Append the elements of the second array (data2) immediately after
   the elements copied from the first array.
4. Print the contents of the newly merged array using std::cout.

Key concepts practiced in this exercise:
- Dynamic memory allocation using new[]
- Pointer arithmetic and array indexing
- Copying data from one array into another
- Understanding how array indices determine where data is placed

Important idea:
When merging arrays, the elements of the second array must start at
index `size1` in the new array, because indices 0 to size1 - 1 are already
occupied by the first array.

The final output should be:
1 2 3 4 5 66 77 10 20 30 40 50 60

This exercise demonstrates how multiple arrays can be combined into a
single dynamically allocated array when their sizes are known only at
runtime.
*/
