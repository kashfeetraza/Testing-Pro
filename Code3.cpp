#include <iostream>
using namespace std;

// Class to represent a Rectangle
class Rectangle {
private:
    int width, height;

public:
    // Constructor to initialize width and height
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Member function to calculate the area of the rectangle
    int area() {
        return width * height;
    }

    // Member function to display dimensions of the rectangle
    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Create an object of Rectangle
    Rectangle rect(10, 5);

    // Display rectangle dimensions and area
    rect.display();
    cout << "Area of the rectangle: " << rect.area() << endl;

    return 0;
}
