#include<iostream>
using namespace std;

int fib(int n)
{
if (n == 0){
    return 0;
}
else if(n==1)
{
    return 1;
}
    
    return fib(n-1)+fib(n-2);

}

int main()
{
 int fb;
 int num;
 cout<<"enter a number"<<endl;
 cin>>num;
 fb = fib(num);
 cout<<"nth fibannci number:"<<fb<<endl;
 return 0;
}