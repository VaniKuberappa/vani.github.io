#include<iostream>
using namespace std;

class test
{
    static int x;
    public:
    static int y;

    void func(int x)
    {
        cout<<"value of ststic x is:"<<test::x;
        cout<<"\n value of local x is"<<x;
    }
};

int test::x = 1;
int test::y = 2;


int main()
{
    test obj;
    int x =3;
    obj.func(x);
    cout<<"\n test::y ="<<test::y;
    return 0;
}