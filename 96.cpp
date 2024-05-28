#include<iostream>
using namespace std;


#define pi 3.1412

class shape
{
    private:

    float radius;
    float length;
    float breadth;

    public:

    shape(float r,float l, float b):radius(r),length(l),breadth(b){}

    virtual void area()
    {
        cout<<"base calss area:"<<endl;
    }
 
 virtual void perimeter()
 {
        cout<<"base calss perimeter:"<<endl;
 }
};


class circle: public shape
{

    public:
    circle(float radius):shape(radius,0,0){}

    void area() override
    {
        cout<<"area of circle:" << pi*radius*radius<<endl;
    }

    void perimeter() override
    {
        cout<<"perimeter of circle: "<< pi*2*radius<<endl;
    }


};

class rectangle:public shape
{
    public:
rectangle (float length, float breadth):shape(0,length, breadth){}

    void area() override
    {
        cout<<"area of rectangle:" << (length*breadth)<<endl;
    }

    void perimeter() override
    {
        cout<<"perimeter of rectangle: "<< 2*(length+breadth)<<endl;
    }

};





int main()
{

shape  s1(3,2,2);
circle c1(3);
rectangle r1(4,4);

c1.area();
c1.perimeter();

r1.area();
r1.perimeter();

    
    return 0;
}
