#include <iostream>  // Include the standard input/output stream library
using namespace std; // Use the standard namespace to avoid std:: prefixing

// Global function to calculate and display the area of a rectangle
void rectangle_area(int length, int width) {
    cout << "Area of Rectangle: " << length * width << endl;
}

// Definition of the Rectangle class
class Rectangle {
private:
    // Private member variables to store the dimensions of the rectangle
    int length, width;

public:
    // Method to input and assign values to length and width
    void input(int l, int w) {
        length = l;
        width = w;
    }

    // Method that calls the global function to compute the area
    void area() {
        // This calls the global rectangle_area() function,
        // passing in the private member variables
        rectangle_area(length, width);
    }
};

int main() {
    Rectangle r;       // Declare an object 'r' of type Rectangle
    r.input(5, 3);     // Set length = 5 and width = 3 using the object's method
    r.area();          // Compute and print the area using the object's method
    return 0;          // Return 0 to indicate successful execution
}

