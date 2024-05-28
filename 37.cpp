#include<iostream>
using namespace std;

int factorial(int n)
{
 if (n == 0 || n == 1)
 {
    return 1;
 }
 else 
 {
     return  n * factorial (n -1);
 }
    
}
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int f = factorial (n);
    cout<<"factorial of agiven number:"<<f<<endl;

}