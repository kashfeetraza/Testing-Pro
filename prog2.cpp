#include <iostream>  // Includes standard input/output stream
using namespace std; // Allows usage of standard namespace (e.g., cout) without prefix

// Global function to calculate and display the area of a rectangle
void rectangle_area(int length, int width) {
    cout << "Area of Rectangle: " << length * width << endl;
}

// Definition of the Rectangle class
class Rectangle {
private:
    // Private data members to store rectangle dimensions
    int length, width;

public:
    // Public method to set the values of length and width
    void input(int l, int w) {
        length = l;
        width = w;
    }

    // Public method to compute the area using the global function
    void area() {
        // Calls the global rectangle_area function with current object's dimensions
        rectangle_area(length, width);
    }
};

int main() {
    Rectangle r;       // Create an object of class Rectangle
    r.input(5, 3);     // Set length = 5 and width = 3 using the input() method
    r.area();          // Compute and print the area using the area() method
    return 0;          // Exit the program
}

