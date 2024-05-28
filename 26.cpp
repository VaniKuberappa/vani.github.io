#include<iostream>
using namespace std;

bool test(int a)
 {
    int r =a;
    if (r%3== 0)
    {
        return true;
    }
    else if(r%7==0)
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
    int x;
    cout<<"enter a number to check whther its multiple of 7 or 3"<<endl;
    cin>>x;
    cout<<test(x)<<endl;
    return 0;
}