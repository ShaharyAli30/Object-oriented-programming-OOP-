
// Question
// Create a C++ program that demonstrates single inheritance. Define a base class Vehicle with private member variables make and year, and public methods to set and get these values. Then, derive a class Car from Vehicle which adds a new method to display the car's details. Implement the classes and show how to create an object of the Car class, set its make and year, and display the details.

// Requirements:

// Define the base class Vehicle with:

// Private member variables make (of type std::string) and year (of type int).
// Public methods setMake and setYear to set the make and year.
// Public methods getMake and getYear to get the make and year.
// Define the derived class Car which inherits from Vehicle with:

// A public method displayDetails that prints "Car Make: [make], Year: [year]".
// In the main function:

// Create an instance of the Car class.
// Set the car's make and year using the setMake and setYear methods.
// Call the displayDetails method to display the car's details.
#include<iostream>
using namespace std;
class Vehicle{
    private:
    string  make;
    int year;
    public:
    void setmake(string make)
    {
        this->make = make ;
          }
    void setyear(int year)
    {
        this->year = year;
    }
    string getmake()
    {
        return make;
    }
    int getyear()
    {
        return year;
    }
};
class car: public Vehicle{
    public:
   void display()
   {
    cout<<"Car Make:"<<getmake()<<endl;
    cout<<"Year:"<<getyear()<<endl;
   }
};

int main()
{   
    car C1;
    C1.setmake("Toyota");
    C1.setyear(2024);
    C1.display();
    
    return 0;
}