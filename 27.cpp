#include<iostream>
using namespace std;


bool test(int x, int y)
{
    if(x>100 && y<0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long int x;
    long int y;

    cout<<"enter temperatures to check"<<endl;

    cin>>x;
    cin>>y;

    cout<<"the temperature:"<<test(x,y)<<endl;
    return 0;



}