#include<iostream>
using namespace std;


int recursion(int a)
{
    
    if(a==0 || a==1)
    return 1;

    if(a<0)
    return 0;
 
    return a * recursion(a-1);
}

int main()
{
    int b;
    cout<<"enter a number to calculate a factorial of a number:"<<endl;
    cin>>b;
    cout<<"factorial of a given number is: "<<recursion(b)<<endl;
    return 0;
}