#include<iostream>
using namespace std;

double ttof(double temp)
{
    double t = temp;
    double f = (t *1.8)+32;
    return f;
}
int main()
{
    double temp;
    cout<<"enter the temperature in celsius"<<endl;
    cin>>temp;

    cout<<"the temperature in fahrenheit is"<<ttof(temp)<<endl;
    return 0;

}