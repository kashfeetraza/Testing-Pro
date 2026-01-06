#include <iostream>  // Include input/output stream for console operations
using namespace std; // Use the standard namespace to avoid std:: prefix

// Definition of the Book class
class Book {
public:
    string title;  // Public member to store book title
    string author; // Public member to store book author

    void display(); // Declaration of member function to display book details
};

// Definition of the display() function outside the class
void Book::display() {
    cout << "Title: " << title << ", Author: " << author << endl;
}

int main() {
    Book b1, b2;  // Create two Book objects: b1 and b2

    // Assign values to the members of the first book
    b1.title = "1984";
    b1.author = "George Orwell";

    // Assign values to the members of the second book
    b2.title = "To Kill a Mockingbird";
    b2.author = "Harper Lee";

    // Display details of the first book
    b1.display();

    // Display details of the second book
    b2.display();

    return 0;  // Exit the program successfully
}

