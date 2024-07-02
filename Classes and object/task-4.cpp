// Create a class named Book in C++ with the following properties:

// title (string)
// author (string)
// pages (int)
// price (float)
// The class should have the following methods:

// setDetails to set the values of the properties.
// displayDetails to display the values of the properties.
// Create an object of the Book class, set the details of a book, and display its details.
#include <iostream>
#include <string>

using namespace std;

class book {
public:
    // Properties
    string title;
    string author;
    int pages;
    float price;

    // Methods / member functions
    void setDetails(const string &bookTitle, const string &bookAuthor, int bookPages, float bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        pages = bookPages;
        price = bookPrice;
    }

    void displayDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Creating Object
    book B1;
    // Setting the values
    B1.setDetails("Comp", "Ali", 100, 400.0f);
    // Displaying values
    B1.displayDetails();
    return 0;
}
