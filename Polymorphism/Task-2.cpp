//Run-time polymorphism
#include<iostream>
using namespace std;
class Shape {
    public:
    virtual double area() = 0;

};
class Circle:public Shape {
    private:
     double radius;
     public:
     Circle(double radius)
     {
        this->radius = radius;
     }
     double area() override
     {
         return 3.14 * radius * radius;
     }
};
class Rectangle:public Shape{
    private:
    double width , height;
    public:
    Rectangle(double width,double height)
    {
        this->width = width;
        this->height = height;
    }
    double area() override {
        return width * height;
    }
};

int main()
{
    Shape* C1 = new Circle(2.3);
    Shape*  R1 = new Rectangle(23,23);
    cout<<"Area of circle:"<<C1->area()<<endl;
    cout<<"Area of Ractangle:"<<R1->area()<<endl;

    return 0;
}