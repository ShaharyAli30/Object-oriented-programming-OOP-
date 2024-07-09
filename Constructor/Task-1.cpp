//parameterized constructor
// Create a C++ class named Book that represents a book. The class should have the following:

// // A private string member variable title.
// // A private string member variable author.
// // A private integer member variable pages.
// // A public non-parameter constructor that initializes title to "Unknown", author to "Unknown", and pages to 0.
// // Public getter methods for each of the member variables.
#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    string author;
    int pages;    
    public:
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        pages = 0;
    }
     string gettitle()
     {
        return title;
     }
     string getauthor()
     {
        return author;
     }
     int getpages()
     {
        return pages;
     }
    void displayinfo()
    {
        cout<<" Title: "<< title << endl;
        cout<<" author: "<< author << endl;
        cout<<" Pages: "<< pages << endl;
    }


};
int main()
{ 
    Book B1;
    B1.displayinfo();
    return 0;
}