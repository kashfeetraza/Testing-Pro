#include <iostream> // Include I/O library
#include<conio.h>
using namespace std; // Use standard namespace

class MobilePhone { // Define MobilePhone class
public:
    string model; // Store model name
    float price; // Store phone price

    void display() { // Method to show data
        cout << "Model: " << model << endl; // Print model
        cout << "Price: $" << price << endl; // Print price
    }
};

int main() {
    MobilePhone phone1; // Create object of MobilePhone

    phone1.model = "iPhone 14"; // Assign model
    phone1.price = 999.99; // Assign price

    phone1.display(); // Call display function

    getch(); // Exit program
}

