#include<iostream>
using namespace std;

class a
{
    protected:
    int x;
    public:
    a()
    {
        x=10;
    };
};

class b
{
    protected:
    int x;
    public:
    b()
    {
        x =20;
    }
};

class c:public a,public b{
    public:
    void fun()
    {
        cout<<"a's x is:"<<a::x;
        cout<<"\n b's x is:"<<b::x;
            }
};

int main()
{
    c c;
    c.fun();
    return 0;
}