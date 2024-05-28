#include<iostream>
using namespace std;

int main()
{
    float f =3.5;
    int a = f;
    cout<<"the value of a:"<<a;

    int b = static_cast<int>(f);
    cout<<"\n the value of b:"<<b;
    return 0;
}