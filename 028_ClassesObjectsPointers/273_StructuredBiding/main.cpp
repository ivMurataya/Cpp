#include <iostream>

// A simple class with two public data members.
// Since x and y are public, structured bindings can access them directly.
class Point
{
public:
    double x;
    double y;
};

// Prints the values stored in a Point object.
// The function receives a copy of the point.
void print_point(const Point p) {
    std::cout << "Point [ x : " << p.x << ", y : " << p.y << "]" << std::endl;
}

int main() {

    // Create a Point object.
    Point point1;

    // Assign values to its members.
    point1.x = 5;
    point1.y = 6;

    // Print the original point.
    print_point(point1);

    // Structured binding:
    // This creates two new variables, a and b,
    // initialized with point1.x and point1.y.
    //
    // Important:
    // These are copies, not references.
    // So changing point1 later will NOT change a and b.
    auto [a, b] = point1;

    // Print the values extracted from point1.
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // Change the original object after the structured binding.
    point1.x = 44.1;
    point1.y = 55.2;

    // Print the updated point.
    print_point(point1);

    // a and b still keep the old copied values,
    // because structured binding with 'auto' made copies.
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // Lambda that captures everything by value.
    // It captures a and b as they are at this moment.
    auto func = [=]() {
        std::cout << "a (captured) : " << a << std::endl;
        std::cout << "b (captured) : " << b << std::endl;
        };

    // Call the lambda.
    func();

    return 0;
}

/*
Output:

Point [ x : 5, y : 6]
a : 5
b : 6
Point [ x : 44.1, y : 55.2]
a : 5
b : 6
a (captured) : 5
b (captured) : 6
*/
