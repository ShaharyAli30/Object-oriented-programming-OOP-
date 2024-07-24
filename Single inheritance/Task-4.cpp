// Create a C++ program that demonstrates single inheritance with parameterized constructors. Define a base class Employee with private member variables name and salary, and a public parameterized constructor to initialize these values. Then, derive a class Manager from Employee which adds a new method to display the manager's details. Implement the classes and show how to create an object of the Manager class, and display the details using the method.

// Requirements:

// Define the base class Employee with:

// Private member variables name (of type std::string) and salary (of type double).
// A public parameterized constructor that initializes name and salary.
// Public methods getName and getSalary to get the name and salary.
// Define the derived class Manager which inherits from Employee with:

// A public parameterized constructor that initializes the base class's member variables.
// A public method displayDetails that prints "Manager Name: [name], Salary: [salary]".
// In the main function:

// Create an instance of the Manager class using the parameterized constructor.
// Call the displayDetails method to display the manager's details.

#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    double salary;
    public:
    Employee(string name , double salary)
    {
        this->name = name;
        this->salary = salary;
    }
    string getname()
    {
        return name;
    }
    double getsalary()
    {
        return salary;
    }
};
class Manager:public Employee{
    public:
    Manager(string name , double salary):Employee(name , salary)
    {}
    void display()
    {
        cout<<"Name:"<<getname()<<endl;
        cout<<"Salary:"<<getsalary()<<endl;
    }
};

int main()
{
    Manager M1("Ali",32000);
    M1.display();
    
    return 0;
}