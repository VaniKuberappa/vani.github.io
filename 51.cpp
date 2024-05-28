#include<iostream>
using namespace std;

int x;

int main()
{
int x= 7;
cout<<"the x value of global: "<< ::x <<endl;
cout<<"the x value in local: "<< x <<endl;
    return 0;
}