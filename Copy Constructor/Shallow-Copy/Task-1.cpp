#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int cgpa;
    public:
    student(string name, int cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }
    student(student &obj)
    {
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    void getinfo()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Cgpa:"<<cgpa<<endl;
    }
};

int main()
{
    student S1("Ali",3);
     student S2(S1);
    S1.getinfo();
    
    return 0;
}
