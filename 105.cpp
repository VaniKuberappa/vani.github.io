#include<iostream>
using namespace std;

int main()
{
    int x =10;
    int& ref =x;
    cout<<"value of x:"<<x<<endl;
    cout<<"value of ref:"<<ref<<endl;
    ref= 20;
    cout<<"value of x:"<<x<<endl;
    cout<<"value of ref:"<<ref<<endl;
    return 0;
}