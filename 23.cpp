#include<iostream>
using namespace std;

int test(int a)
{
    if(a>51)
    {
        return (a-51)*3;
    }
    else
    {
        return 51-a;
    }
}

int main()
{
  cout<<  test(53)<<endl;
   cout<< test(30)<<endl;
   cout<< test(51)<<endl;
   return 0;
}