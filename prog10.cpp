#include <iostream>
using namespace std;

// Define a class named Book
class Book {
public:
    string title;  // Public member to hold the book's title
    string author; // Public member to hold the book's author

    // Member function to display book details
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book b1, b2;  // Create two Book objects named b1 and b2

    // Set the details for the first book
    b1.title = "1984";
    b1.author = "George Orwell";

    // Set the details for the second book
    b2.title = "To Kill a Mockingbird";
    b2.author = "Harper Lee";

    // Display details of both books
    b1.display();
    b2.display();

    return 0;  // Indicate successful program termination
}

