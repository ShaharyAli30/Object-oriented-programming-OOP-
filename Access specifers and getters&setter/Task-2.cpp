Task: Create a Class for a Rectangle

// Define a class Rectangle with private data members length and width.
// Include public member functions:
// setLength(int len) and setWidth(int wid) to set the values of length and width.
// getLength() and getWidth() to retrieve the values of length and width.
// calculateArea() to compute and return the area of the rectangle (length * width).
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
    float area;  // Add area as a class member

public:
    // Setter methods
    void setLength(float len) {
        length = len;
    }

    // Getter methods
    float getLength() {
        return length;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float getWidth() {
        return width;
    }

    // Method to calculate area
    void calculateArea() {
        area = length * width;  // Calculate the area
    }

    // Method to display info
    void displayInfo() {
        calculateArea();  // Ensure area is calculated before displaying it
        cout << "Area: " << area << endl;
    }
};

int main() {
    Rectangle A1;
    A1.setLength(23.2);
    A1.setWidth(32.6);
    A1.displayInfo();
    return 0;
}
