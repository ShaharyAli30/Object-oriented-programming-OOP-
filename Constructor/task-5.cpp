// parameteriozed constructure
// Define a class Circle in C++ with the following specifications:

// A private data member radius of type double.
// A parameterized constructor that initializes radius.
// A public getter method to retrieve the value of radius.
// A public member function circumference that calculates and returns the circumference of the circle.
// A public member function area that calculates and returns the area of the circle.
// Write the implementation of the class and a sample main function that creates a Circle object using the parameterized constructor and prints the radius, circumference, and area of the circle.
#include<iostream>
#define PI 3.14159265358979323846
using namespace std;
class Circle{
    private:
    double radius;
    double circumference;
    public:
    Circle(double R): radius(R)
    {
        circumference = 2 * PI * radius;
    }
    double getradius()
    {
        return radius;
    }
    double getcircumference()
    {
        return circumference; 
    }

};

int main()
{
    Circle C1(5);
    cout<<"radius =\t "<<C1.getradius()<<endl;
    cout<<"Circumference =\t "<<C1.getcircumference()<<endl;
    return 0;
}