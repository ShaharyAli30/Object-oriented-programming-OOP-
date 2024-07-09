// Question:

// You need to design a class called Student in C++. This class should represent a student with basic attributes and functionalities. The specifications for the class are as follows:

// Attributes:

// name (string): The name of the student.
// age (int): The age of the student.
// gpa (double): The GPA of the student.
// Constructor:

// A non-parametrized constructor that initializes name to "Unknown", age to 0, and gpa to 0.0.
// Member Functions:

// getName(): Returns the name of the student.
// getAge(): Returns the age of the student.
// getGPA(): Returns the GPA of the student.

#include<iostream>
#include<string>
using namespace std;
class student{
    private:
     string name;
     int age;
     double gpa;
     public:
     student()
     {
        name = "Unknown";
        age = 0;
        gpa = 0.0;
     }
     string getname()
     {
        return name;
     }
     int getage()
     {
        return age;
     }
     double getgpa()
     {
        return gpa;
     }
     void displayinfo()
     {
        cout<<"Name:"<< name <<endl;
        cout<<"age:"<< age <<endl;
        cout<<"gpa:"<< gpa <<endl;

     }
};
int main()
{
    student S1;
    S1.displayinfo();
    
    return 0;
}