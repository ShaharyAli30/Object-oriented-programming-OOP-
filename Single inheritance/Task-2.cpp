// Question:

// Create a C++ program that demonstrates single inheritance. Define a base class Animal with a private member variable name and public methods to set and get the name. Then, derive a class Dog from Animal which adds a new method to print a message including the dog's name. Implement the classes and show how to create an object of the Dog class, set its name, and display the message.

// Requirements:

// Define the base class Animal with:

// A private member variable name (of type std::string).
// A public method setName to set the name.
// A public method getName to get the name.
// Define the derived class Dog which inherits from Animal with:

// A public method bark that prints "Woof! My name is [name]".
// In the main function:

// Create an instance of the Dog class.
// Set the dog's name using the setName method.
// Call the bark method to display the message.
#include<iostream>
using namespace std;
class Animal{
    private:
    string name;
    public:
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }

};
class Dog : public Animal{
    public:
    void display()
    {
        cout<<"Woof! My name is "<<getname()<<endl;
    }

};

int main()
{  Dog D1;
   D1.setname("Buddy");
   D1.display();
    
    return 0;
}