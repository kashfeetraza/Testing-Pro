#include <iostream> 
// Include input-output stream
using namespace std; 
// Use standard namespace

class Car { 
// Define a Car class
public:
    string brand; 
// Variable to hold car brand
    int year; 
// Variable to hold manufacturing year

    void display() { 
// Function to display car info
        cout << "Brand: " << brand << endl; 
// Print brand
        cout << "Year: " << year << endl; 
// Print year
    }
};

int main() {
    Car c1; 
// Create a Car object

    c1.brand = "Toyota"; 
// Set brand
    c1.year = 2021; 
// Set year

    c1.display(); 
// Call display function

    return 0; 
// End of program
}

