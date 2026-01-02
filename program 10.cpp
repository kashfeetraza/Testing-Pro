#include <iostream> // Include I/O stream
using namespace std; // Standard namespace

class Teacher { // Define a class named Teacher
public:
    string name; // Teacher's name
    string subject; // Subject they teach

    void display() { // Function to display teacher details
        cout << "Teacher Name: " << name << endl; // Output name
        cout << "Subject: " << subject << endl; // Output subject
    }
};

int main() {
    Teacher t1; // Create object of Teacher

    t1.name = "Mrs. Smith"; // Set name
    t1.subject = "Mathematics"; // Set subject

    t1.display(); // Call display method

    return 0; // Return 0 to indicate successful execution
}

