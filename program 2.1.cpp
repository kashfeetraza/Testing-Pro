#include <iostream> 
// Include the input-output stream for using cout and cin
using namespace std; 
// Use the standard namespace so we don't need std:: prefix

void Employee:: display() { 
// Member function to display employee details
        cout << "Employee Name: " << name << endl; // Output name
        cout << "Salary: $" << salary << endl; // Output salary
    }
    
class Employee { 
// Define a class named Employee
public: 
// Public access modifier to allow access to members outside the class
    string name; 
// Variable to store employee name
    double salary; 
// Variable to store employee salary
	void display();
	

    
};


int main() { 
// Main function - execution starts here
    Employee emp1; 
// Create an object 'emp1' of class Employee

    emp1.name = "Cash-feet"; 
// Assign a value to the 'name' member
    emp1.salary = 5500; 
// Assign a value to the 'salary' member

    emp1.display(); 
// Call the display function to print details

    return 0; 
// Return 0 to indicate successful execution
}

