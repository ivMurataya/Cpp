#include <iostream>
#include <string>

/*
    A functor (function object) is a class/object that behaves like a function.

    This is achieved by overloading operator().
    Once operator() is defined, objects of this class can be called
    using function syntax:

        object(arguments);

    Internally, this is translated to:

        object.operator()(arguments);
*/
class Print {

public:

    /*
        Functor overload #1

        This operator allows the object to be called with one string.

        Example:
            print("John");

        Equivalent to:
            print.operator()("John");

        The const after the function means this operator does not modify
        the Print object.
    */
    void operator()(const std::string& name) const {
        std::cout << "The name is : " << name << std::endl;
    }


    /*
        Functor overload #2

        This is another version of operator().
        Since it receives two parameters, C++ can distinguish it from
        the first overload.

        Example:
            print("Daniel", "Gray");

        Equivalent to:
            print.operator()("Daniel", "Gray");

        It returns a string instead of printing directly.
    */
    std::string operator()(const std::string& last_name,
        const std::string& first_name) const {

        return (last_name + " " + first_name);
    }
};


/*
    Functions can receive functors as parameters.

    Here, printer is an object of type Print that behaves like a function.

    Passing it as const reference avoids copying the object and guarantees
    that do_something will not modify it.
*/
void do_something(const Print& printer) {

    // Calls operator()(const std::string&)
    // Equivalent to:
    // printer.operator()("Snow");
    printer("Snow");
}


int main() {

    // Create an object of the Print class.
    Print print;


    // Calling the object like a function.
    // C++ internally calls:
    // print.operator()("John");
    print("John");


    // Passing the functor to another function.
    // The function will use the overloaded operator().
    do_something(print);


    // Calling the second operator() overload.
    // C++ chooses the correct overload because two arguments are provided.
    std::cout << print("Daniel", "Gray") << std::endl;


    return 0;
}


/*
Output:

The name is : John
The name is : Snow
Daniel Gray


Why use functors instead of normal functions?

1. Functors can store state.

Example:

class Counter {
    int count = 0;

public:
    void operator()() {
        count++;
    }
};

The object remembers information between calls.

2. Functors work very well with the STL.

Example:

std::sort(numbers.begin(), numbers.end(), Comparator());

The comparator object can contain custom behavior.

3. They can be faster than function pointers because
   the compiler can inline their calls.

Modern C++ often uses:
- lambdas
- functors
- std::function

Lambdas are basically syntactic sugar for functors.
*/
