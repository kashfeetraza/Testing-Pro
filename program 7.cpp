#include <iostream> // Include standard input-output library
using namespace std; // Use standard namespace

class Laptop { // Define a class named Laptop
public:
    string brand; // Variable for laptop brand
    int ramGB; // Variable for RAM size in GB

    void display() { // Member function to display laptop info
        cout << "Brand: " << brand << endl; // Display brand
        cout << "RAM: " << ramGB << " GB" << endl; // Display RAM size
    }
};

int main() {
    Laptop l1; // Create an object of Laptop class

    l1.brand = "Dell"; // Assign brand name
    l1.ramGB = 16; // Assign RAM size

    l1.display(); // Call the display method

    return 0; // End of main function
}

