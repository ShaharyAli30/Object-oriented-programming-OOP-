   // Parameterized constructor
// Define a class Parallelogram in C++ with the following specifications:

// Two private data members: base and height of type int.
// A parameterized constructor that initializes base and height.
// Public getter methods to retrieve the values of base and height.
// A public member function area that calculates and returns the area of the parallelogram.
// Write the implementation of the class and a sample main function that creates a Parallelogram object using the parameterized constructor and prints the base, height, and area of the parallelogram.
#include<iostream>
#include<string>
using namespace std;
class Parallelogram{
    private:
        int base;
        int height;
        int area;
         public:
        Parallelogram(int b , int h): base(b) , height(h)
        { 
            area = base * height;
        }
       
        int getbase()
        {
            return base;
        }
        int getheight()
        {
            return height;
        }
      
        int getarea()
        {
            return area;
        }
};

int main()
{   Parallelogram P1(2, 5);
    
    cout<<"Base ="<<P1.getbase()<<endl;
    cout<<"Height ="<<P1.getheight()<<endl;
    cout<<"Area ="<<P1.getarea()<<endl;

    
    return 0;
}