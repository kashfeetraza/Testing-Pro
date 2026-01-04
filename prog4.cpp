/*
4. Program: Simple Bank Account Class
Statement: Define a class BankAccount with account holder’s name and balance. Show account details using a method.
*/

#include <iostream>   // Include input/output stream for console operations
using namespace std;  // Use the standard namespace to avoid std:: prefix

// Definition of the BankAccount class
class BankAccount {
public:
    // Public member variables for account holder's name and account balance
    string holderName;
    double balance;

    // Method to display account details
    void displayDetails() {
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;          // Create an instance of BankAccount named acc1
    acc1.holderName = "John Doe";  // Set the account holder's name
    acc1.balance = 1500.75;         // Set the initial account balance

    acc1.displayDetails();     // Call method to display account details
    return 0;                 // Return 0 to indicate successful execution
}

