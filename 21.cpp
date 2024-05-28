#include<iostream>
#include <cmath>
using namespace std;

# define pi 2.31

class shape
{
 public:

  virtual double  calculate_area() const = 0;
  virtual double  calculate_perimeter() const =0;
    
};
class triangle: public shape
{
    private:
    double side1;
    double side2;
    double side3;

    public:
    triangle ( double s1, double s2,  double s3):side1(s1),side2(s2),side3(s3){}

    double calculate_area () const override
 {
    double s = (side1+side2+side3)/2;
    return sqrt(((s)*(s-side1)*(s-side2)*(s-side3)));
 }

    double calculate_perimeter () const override
 {
    return side1+side2+side3;
 }
};
class rectangle:public shape
{
 private:
 double length;
 double width;
 public:
 rectangle(double l,double w):length(l),width(w){}

double calculate_area() const override
{
    return  length*width;
}
double calculate_perimeter() const override
{
     return 2*(length+width);
}

};
class circle: public shape
{
    private: double radius;
    
    public:
    circle(double r):radius(r){}

    double calculate_area() const override
    {
        return pi* pow (radius,2);
    }

    double calculate_perimeter()const override
    {
        return 2 * pi * radius;
    }
};






int main()
{
    triangle t(4,4,3.2);
    rectangle  r(4.2,8);
    circle c(7);

    cout<<"area of rectangle:"<<r.calculate_area()<<endl;
    cout<<"perimeter of rectangle:"<<r.calculate_perimeter()<<endl;

    cout<<"area of traingle:"<<t.calculate_area()<<endl;
    cout<<"perimeter of triangle"<<t.calculate_perimeter()<<endl;

    cout<<"are of circle:"<<c.calculate_area()<<endl;
    cout<<"perimeter of circle"<<c.calculate_perimeter()<<endl;

    return 0;
}