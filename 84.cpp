#include<iostream>
using namespace std;

#define pi 3.1412
class area
{
    public:

int area_calculate(int r)
    {
        return pi*r*r;
    }
int  area_calculate(int l,int b)
    {
    return 2*(l+b);
    }
};

int main()
{
    area a;
    cout<<"area of circle"<<a.area_calculate(2)<<endl;
    cout<<"area of rectangle:"<<a.area_calculate(4,5)<<endl;

    return 0;
}