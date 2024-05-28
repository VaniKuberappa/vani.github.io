#include<iostream>
using namespace std;

#define pi 3.1412;

class shape
{
    public:
    int radius;
    int length;
    int breadth;

shape(int rd, int l, int b): radius(rd), length(l),breadth(b){};
virtual float area()
{
cout<<"basearea"<<endl;
return 0.0;
}
virtual float perimeter()
{
cout<<"baseperimeter"<<endl;
return 0.0;
}

};

class rectangle : public shape
{
    public:

    rectangle(int rd ,int l, int b):shape(rd,l,b){}
  float area() override
 {
    return length*breadth;
 }
 
 float perimeter()override
 {
    return 2 *(length+breadth);

 }

};

class circle: public shape
{
    public:
circle(int rd ):shape( rd , 0, 0){}
float area() override
 {
    return radius*radius*pi;
 }

 float perimeter()override
 {
    float perimeter = 2*pi;
    return perimeter*radius;
 }

};


int main()
{
shape s(3,4,5);
rectangle r1(2,3,5);
circle c1(5);
cout<<s.area()<<endl;
cout<<s.perimeter()<<endl;
cout<<"rectangle area:"<<r1.area()<<"rectangle perimeter:"<<r1.perimeter()<<endl;
cout<<"circle area:"<<c1.area()<<"circle perimeter:"<<c1.perimeter()<<endl;

return 0;
}