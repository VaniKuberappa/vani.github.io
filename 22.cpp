#include<iostream>
using namespace std;

int sum(int &a, int &b)
{
 if (a==b)
 {
    return a+b+b;
 }
 else
 {
    return a+b;
 }
}
int main()
{
    int a;
    int b;
    cout<<"enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"sum of given numbers:"<< sum(a,b);
    return 0;
}