
#include<iostream>
using namespace std;
class Employee{
    protected:
     string name;
     int ID;
     double salary;
     public:
     void setname(string name)
     {
        this->name = name;
             }
     void setID(int ID)
     {
        this->ID = ID;
     }    
     void setsalary(double salary)
     {
        this->salary = salary;
     }
     string getname()
     {
        return name;
     }
     int getID()
     {
        return ID;
     }
     double getsalary()
     {
        return salary;
     }
     virtual void displayInfo()
     { 
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Salary:"<<salary<<endl;
     }
};
class Developer:public Employee{
    protected:
    string programmingLanguage;
    public:
    void setprogrammingLanguage(string programmingLanguage)
    {
        this->programmingLanguage= programmingLanguage;

    }
    string getprogrammingLanguage()
    {
        return programmingLanguage;
    }
    void displayInfo() override
    {   Employee::displayInfo();
        cout<<"Programming Language:"<<programmingLanguage<<endl;
    }
};
class Manager:public Employee{
    protected:
    int teamSize;
    public:
    void setteamSize(int teamSize)
    {
        this->teamSize = teamSize;
    }
    int getteamSize()
    {
        return teamSize;
    }
    void displayInfo() override{
     
   Employee::displayInfo();
           
        cout<<"TeamSize:"<<teamSize<<endl;

    }
};


int main()
{    Manager M1;
     Developer D1;
     
     
     D1.setname("ALi");
     D1.setID(23);
     D1.setsalary(50000);
     D1.setprogrammingLanguage("Java");
     
      M1.setname("BOB");
      M1.setID(30);
      M1.setsalary(100000);
      M1.setteamSize(10);
      cout<<"Developer:"<<endl;
      D1.displayInfo();
      cout<<"Manager:"<<endl;
      M1.displayInfo();
    

    return 0;
}