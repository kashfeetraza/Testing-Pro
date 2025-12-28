#include <iostream>
using namespace std;

// Class: Book with overloaded constructors
class Book {
public:
    // Constructor with only title
    Book(string title) {
        cout << "Book: " << title << endl;
    }

    // Constructor with title and author
    Book(string title, string author) {
        cout << "Book: " << title << " by " << author << endl;
    }
};

int main() {
    // Creating objects using both constructors
    Book b1("1984");
    Book b2("To Kill a Mockingbird", "Harper Lee");

    return 0;
}

