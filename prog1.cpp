#include <iostream>  // For input/output operations
using namespace std; // So we don't have to prefix std:: before standard functions

// Definition of the Rectangle class
class Rectangle {
private:
    // Private member variables to store dimensions
    int length, width;

public:
    // Public method to input values for length and width
    void input(int l, int w) {
        length = l;
        width = w;
    }
    
    // Declaration of a method that calculates and prints the area
    // Takes parameters instead of using member variables directly
    void rectangle_area(int length, int width);

    // Method to compute area using stored member variables
    void area() {
        rectangle_area(length, width);  // Calls the member function with current values
    }
};

// Definition of the rectangle_area method outside the class
void Rectangle::rectangle_area(int length, int width) {
    // Computes and prints the area using the provided parameters
    cout << "Area of Rectangle: " << length * width << endl;
}

int main() {
    Rectangle r;       // Create an instance of Rectangle
    r.input(5, 3);     // Set length = 5, width = 3
    r.area();          // Calls area() -> which calls rectangle_area()
    return 0;          // Exit program
}

