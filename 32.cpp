#include<iostream>
using namespace std;

double fhtot(double f)
{
    double fhat = f;
    double t = ((fhat -32)*5)/9;
    return t;
}

int main()
{
    double f;
    cout<<"enter the temperature in fahrenheit"<<endl;
    cin>>f;

    cout<<"the given tempertaure in celsius is"<<fhtot(f)<<endl;
    return 0;
}