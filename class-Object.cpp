#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    string name;
};
int main(){
   student a , b;
   a.roll_no=86;
   a.name="Ali";
   cout<<a.roll_no<<"-"<<a.name<<endl;
   
   b.roll_no=96;
   b.name="Moez";
   cout<<b.roll_no<<"-"<<b.name<<endl;
   return 0;
}
