#include<iostream>
using namespace std;


class construct
{
    public:
    int a,b;
    construct()
    {
        a=10;
        b=12;
    }
};
int main()
{

    construct c;
    cout<<"a:"<<c.a<<endl<<"b:"<<c.b;
    return 0;
}