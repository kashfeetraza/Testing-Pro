#include <iostream>  // Include input/output stream for console operations
using namespace std; // Use the standard namespace to avoid std:: prefix

// Definition of the Car class
class Car {
public:
    string brand;  // Public data member to store the car brand
    string model;  // Public data member to store the car model

    void show();   // Declaration of the member function to display car details
};

// Definition of the show() member function outside the class
void Car::show() {
    cout << "Brand: " << brand << ", Model: " << model << endl;  // Prints brand and model
}

int main() {
    Car c1;            // Create an object 'c1' of type Car
    c1.brand = "Toyota";  // Assign the brand
    c1.model = "Corolla"; // Assign the model

    c1.show();         // Call the show() function to display the details

    return 0;          // Return 0 to indicate successful program termination
}

