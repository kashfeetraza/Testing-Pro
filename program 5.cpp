#include <iostream> 
// Include input-output library
using namespace std; 
// Use standard namespace

class BankAccount { 
// Define BankAccount class
public:
    string accountHolder; 
// Name of account holder
    double balance;
// Current account balance

    void display() { 
// Function to display account info
        cout << "Account Holder: " << accountHolder << endl;
// Output name
        cout << "Balance: $" << balance << endl; 
// Output balance
    }
};

int main() {
    BankAccount acc1; 
// Create BankAccount object

    acc1.accountHolder = "Someone"; 
// Set account holder name
    acc1.balance = 1250.75; 
// Set balance

    acc1.display(); 
// Display account details

    return 0; 
// Successful execution
}

