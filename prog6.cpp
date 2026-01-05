#include <iostream>
using namespace std;

// A normal (global) function, NOT a member of any class
void show(string brand, string model) {
    cout << "Brand: " << brand << ", Model: " << model << endl;
}

class Car {
public:
    string brand;  // Public member variable for the brand of the car
    string model;  // Public member variable for the model of the car

    void showDetails() {
        // Calls the global function 'show' with this object's brand and model
        show(brand, model);
    }
};

int main() {
    Car c1;               // Create an object of class Car
    c1.brand = "Toyota";  // Set brand
    c1.model = "Corolla"; // Set model

    c1.showDetails();     // Call method to display details (which calls the global show function)

    return 0;             // Exit program successfully
}

