// Inheritance:When properties & member function of base class are passed on to the derived class
#include<iostream>
using namespace std;
class parent{
    public:
    string name;
    int age;
    parent(string name , int age)
    {
        this->name = name;
        this->age = age;
    }
};
class student : public parent{
   public:
   int rollno;
   student(string name, int age, int rollno)   : parent(name , age)
   {
    this->rollno = rollno;
   }
   void getinfo()
   {
    cout<<"Name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"Roll No:"<<rollno<<endl;
   }
};

int main()
{
    student S1("ali",23,1234);
    S1.getinfo();
    return 0;
} 