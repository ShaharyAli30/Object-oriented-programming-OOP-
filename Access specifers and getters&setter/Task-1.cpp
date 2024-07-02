// Task: Create a Student class

// Define a Student class with private data members name (string), age (int), and grade (double).
// Provide public member functions (setter and getter methods) to access and modify these private members.
// Implement a method displayInfo() that prints out all the information about the student.
#include<iostream>
using namespace std;
class Student{
    private:
      string name;
      int age;
      double grade;
    public:
    void setname(string Name){
        name = Name;
    }
    string getname()
    {
        return name;
    }
    void setage(int Age){
        age = Age;
    }
    int getage()
    {
        return age;
    }
    void setgrade(double Grade){
        grade = Grade;
    }
    double getgrade(){
        return grade;
    }
    //display information
    void displayInfo()
    { 
        cout<< "Name:" << name <<endl;
        cout<< "Age:" << age <<endl;
        cout<< "grade:" << grade <<endl;


    }

};
int main(){
    Student S1;
    S1.setname("Ali");
    S1.setage(21);
    S1.setgrade(23.2);
    S1.displayInfo();
        return 0;
}