#include <iostream>  // Include input/output stream for console operations
using namespace std; // Use the standard namespace to avoid std:: prefix

// Definition of the Book class
class Book {
public:
    string title;   // Public member to store the book's title
    string author;  // Public member to store the book's author

    // Member function defined inside the class to display book details
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book b1, b2;           // Create two objects of the Book class: b1 and b2

    b1.title = "1984";     // Set title for b1
    b1.author = "George Orwell"; // Set author for b1

    b2.title = "To Kill a Mockingbird"; // Set title for b2
    b2.author = "Harper Lee";            // Set author for b2

    b1.display();           // Display details of book b1
    b2.display();           // Display details of book b2

    return 0;               // Exit the program successfully
}

