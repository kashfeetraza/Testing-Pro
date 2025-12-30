#include <iostream> 
// Include input-output stream
using namespace std; 
// Use standard namespace

   
    void Book :: display() { 
// Member function to print book info
        cout << "Title: " << title << endl; // Print title
        cout << "Author: " << author << endl; // Print author
    }

class Book { 
// Define a class named Book
public:
    string title; 
// Variable to store book title
    string author; 
// Variable to store book author

	void display();

};



int main() {
    Book book1; 
// Create a Book object

    book1.title = "2025";
// Assign title
    book1.author = "Kashfeet Raza"; 
// Assign author

    book1.display(); 
// Call display function

    return 0; 
// Successful program termination
}

