#include <iostream>

int main() {

    int condition{0};     // Value used by the switch to select a case
    int my_var{4};        // Regular variable, visible throughout main

    // C++17 switch with initializer
    // 'data' is initialized before the switch condition is evaluated
    // Scope of 'data' is limited to the entire switch statement
    switch (int data{7}; condition)
    {
        // This would never safely run because execution may jump directly
        // to a case label, skipping initialization
        // int x{9};

        //  Declaration without initialization is allowed
        // but still shared across all cases
        int x;

    case 0:
        // ❌ Initializing variables directly under a case label is dangerous
        // because execution jumps here, skipping initialization
        // int y{5};

        // ✅ Declaration without initialization is allowed
        int y;

        x = 6;             // Safe: assignment happens after control enters case
        x++;
        std::cout << "x : " << x << std::endl;
        std::cout << "Statement1" << std::endl;
        std::cout << "Statement2" << std::endl;
        break;

    case 1:
        // Same scope as case 0
        // 'z' exists for the entire switch, but may be uninitialized
        int z;

        my_var++;
        y = 5;             // ❌ Undefined behavior if case 0 was not executed
                           // because 'y' may not have been initialized
        std::cout << "y : " << y << std::endl;
        std::cout << "Statement3" << std::endl;
        std::cout << "Statement4" << std::endl;
        break;

    default:
        int u;             // Also in the same switch scope

        z = 10;            // ❌ Undefined behavior if 'z' was not initialized
        std::cout << "Statement5" << std::endl;
        std::cout << "Statement6" << std::endl;
        break;
    }

    // Executed after the switch finishes
    std::cout << "Moving on..." << std::endl;

    return 0;
}
