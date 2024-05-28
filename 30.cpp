#include<iostream>
#include<cmath>
using namespace std;

const double pi = 3.14;

double volume(double r)
{
    double rad = r;
    double vol = (4 * 3.14*rad*rad*rad)/3;
    return vol;
}
int main()
{
    double r ;
    cout<<"enter the radius"<<endl;
    cin>>r;

    cout<<"the voulme of sphere is:"<<volume(r)<<endl;
    return 0;
}