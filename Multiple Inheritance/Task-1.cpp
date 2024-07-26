#include<iostream>
using namespace std;
class person{
  protected:
  string name;
  int age;
  public:
  person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  void displaypersondetail()
  {
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
  }

};
class Employee{
    protected:
    int EmployeeID;
    string department;
    public:
    Employee(int EmployeeID,string department)
    {
        this->EmployeeID = EmployeeID;
        this->department = department;
    }
    void displaypEmployeedetail()
    {
        cout<<"EmployeeID:"<<EmployeeID<<endl;
        cout<<"department:"<<department<<endl;
    }
};
class Salary{
    protected:
    double basicsalary;
    double bonus;
    public:
    Salary(double basicsalary,double bonus)
    {
        this->basicsalary = basicsalary;
        this->bonus = bonus;
    }
    double calculateTotalSalary()
    {
        return basicsalary + bonus;
    }

};
class Manager:public person,public Employee,public Salary{
   protected:
   string designation;
   public:
   Manager(string name,int age,int EmployeeID,string department,double basicsalary,double bonus,string designation):person(name,age),Employee(EmployeeID,department),Salary(basicsalary,bonus),designation(designation)
   {}
   void displaypManagerdetail()
   {
    displaypersondetail();
    displaypEmployeedetail();
    cout<<"Salary:"<<basicsalary<<endl<<"bonus:"<<bonus<<endl;
    cout<<"TotalSalary:"<<calculateTotalSalary()<<endl;
    cout<<"Designation:"<<designation<<endl;
   }
};
int main()
{
    Manager M1("Ali",25,221,"IT",30000,3000,"Intern");
    M1.displaypManagerdetail();
    return 0;
} 