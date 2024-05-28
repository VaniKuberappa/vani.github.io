#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int width;
    public:

    void setlw(int l,int w)
    {
        length =l;
        width = w;
    }

    int  calculate_area()
    {
       int area = length*width;
       return area;
    }
    int  calculate_perimeter()
    {
        int perimeter = 2*(length+width);
        return perimeter;
    }
};

int main()
{

    rectangle r;
    int l =2;
    int w =4;

    r.setlw(l,w);
    cout<<"area of rectangle is:"<<r.calculate_area()<<endl;
    cout<<"perimeter  of rectangle is:"<<r.calculate_perimeter()<<endl;
    return 0;
}