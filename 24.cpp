#include<iostream>
using namespace std;


bool test(int a, int b)
{
    const int x=30;
    if(a == x || b==x)
    {
        return true;
    }
    else if (x==(a+b))
    {
        return true ;
    }
    else
    {
        return false;
    }
    
}
int main()
{
 cout<<test(15,15)<<endl;
 cout<<test(30,0)<<endl;
 cout<<test(30,30)<<endl;
 cout<<test(0,10)<<endl;
 return 0;
}