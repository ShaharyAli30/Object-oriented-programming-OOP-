#include <iostream>
using namespace std;

class Teacher {
    // Properties
public:
    string name;
    string dept;
    string subject;
    float salary;

    // Methods/member function
    void changedept(string newdept) {
        dept = newdept;
    }
};

int main() {
    Teacher t1;
    t1.name = "Ali";
    t1.changedept("Computer");
    t1.subject = "C++";
    t1.salary = 23000;

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
}
