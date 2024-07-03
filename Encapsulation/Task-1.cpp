//Encapsulatiom: IS a process to wraping data and member function into a single unit called class
#include<iostream>
using namespace std;
class store{
    //Data/properties
    private:              //Example of Encapsulation 
     string person;
     string things;
     //Member Function
     public:
     void setperson( string Person)
     {
        person = Person;
     }
     string getperson()
     {
        return person;
     }
     void  setthings(string Things)
     {
        things = Things;
     }
     string getthings(){
        return things;
     }
     void displayinfo()
     {
        cout<<"person:"<< person << endl;
        cout<<"Things:"<< things << endl;

     }
};
 int main()
 { 
      store S1;
      S1.setperson("ALi");
      S1.setthings("Human");
      S1.displayinfo();
    return 0;
 }