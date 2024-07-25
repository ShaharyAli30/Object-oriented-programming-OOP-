#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void setPersonDetail(string name , int age)
    {
        this->name = name;
        this->age = age;
    }

    void displayPersonDetail()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }

};
class Student:public Person{
    protected:
    int StudentID;
    string major;
    public:
    void setStudentdetail(int StudentID,string major)
    {
        this->StudentID = StudentID;
        this->major = major;
    }
   void displayStudentDetail()
   {
    cout<<"StudentID:"<<StudentID<<endl;
    cout<<"Major:"<<major<<endl;
   }
};
class GraduateStudent:public Student{
    protected:
    string thesistitle;
    string advisorname;
    public:
    void setGraduateStudentDetail(string thesistitle,string advisorname)
    {
          this->thesistitle=thesistitle;
          this->advisorname=advisorname;
            }
    void displayGraduateStudentDetail()
    {
        cout<<"Thesistitle:"<<thesistitle<<endl;
        cout<<"AdvisorName:"<<advisorname<<endl;
    }
};
int main()
{ GraduateStudent G1;
   G1.setPersonDetail("ALi",23);
   G1.displayPersonDetail();
   G1.setStudentdetail(96,"Bsit");
   G1.displayStudentDetail();
   G1.setGraduateStudentDetail("Fyp","Wahab saab");
   G1.displayGraduateStudentDetail();
    
    return 0;
}