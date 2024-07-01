// Question:

// Create a class named Car with the following properties:

// make (string)
// model (string)
// year (integer)
// color (string)
// The class should have the following methods:

// setMake to set the make of the car.
// setModel to set the model of the car.
// setYear to set the year of the car.
// setColor to set the color of the car.
// displayInfo to display all the properties of the car.
// Create an object of the Car class, set its properties using the methods, and then display the car's information using the displayInfo method.
// Code
#include<iostream>
using namespace std;
 class Car {
    //properties
public:
   string make;
   string model;
   int year;
   string color;
   //methods
   void setmake(string carmake){
     make = carmake;
}
   void setmodel(string carmodel){
     model = carmodel;
}
   void setyear(int caryear){
     year = caryear;
}
   void setcolor(string carcolor){
     color = carcolor;
}

   void displayInfo(){
       cout<<"make:"<< make << endl;
       cout<<"model:"<< model << endl;
       cout<<"year:"<< year << endl;
       cout<<"Color:"<< color << endl;
}

 };
 int main()
 {  Car C1;
   C1.setmake("Toyota");
   C1.setmodel("GLI");
   C1.setyear(2024);
   C1.setcolor("white");
    C1.displayInfo();
    return 0;
 }
