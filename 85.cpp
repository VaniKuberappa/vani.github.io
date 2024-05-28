#include<iostream>
using namespace std;

#define pi 3.1412

class calculate
{
    public:
    virtual float calculate_area()
    {
        cout<<"base calss "<<endl;
        return 0.0;
    }
};

class rectangle:public calculate
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l,int b):length(l), breadth (b){};

    float calculate_area() override
    {
    return 2*(length+breadth);
    }
};
class circle: public calculate
{
private:
int radius;
public:
circle(int rd):radius(rd){};


float calculate_area() override
{
    return pi*radius*radius;
}
};

int main()
{
circle c(2)
 rectangle r(3,4);




    return 0;
}