// Define a class Employee in C++ with the following specifications:

// Three private data members: name of type string, id of type int, and salary of type double.
// A parameterized constructor that initializes name, id, and salary.
// Public getter methods to retrieve the values of name, id, and salary.
// A public member function display that prints the details of the employee.
// Write the implementation of the class and a sample main function that creates an Employee object using the parameterized constructor and prints the details of the employee.
#include<iostream>
using namespace std;
class Employee{
    private:
     string name;
     int id;
     double salary;
     public:
     //Parameteorized constructor
     Employee(string n , int i , double s ): name(n) , id(i) , salary(s){}
     //getter/setter
     string getname(){
        return name;
     }
     int getid(){
        return id;

     }
     double getsalary(){
        return salary;
     }
     //display values
     void setdisplay()
     {
        cout<<"Name = "<< name << endl;
        cout<<"id = "<< id << endl;
        cout<<"salary = "<< salary << endl;
     }


};

int main()
{   
    Employee E1("Ali" , 5 , 3500);
    E1.setdisplay();
    return 0;
}