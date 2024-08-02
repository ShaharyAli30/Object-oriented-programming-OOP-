//Compile time Polumorphism
#include<iostream>
using namespace std;
class Mathoperation {
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b, int c)
    {
        return a+b+c;
    }
    double add(double a,double b)
    {
        return a+b;
    }

    

}; 

int main()
{ Mathoperation M1;
 cout<<"The sume of two Integer:"<<M1.add(2,3)<<endl;
 cout<<"The sum of three Integer:"<<M1.add(3,4,5)<<endl;
 cout<<"The of two double:"<<M1.add(2,3)<<endl;

    
    return 0;
}