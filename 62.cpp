#include<iostream>
using namespace std;

int main()
{
 int sum = 0;
 int n;
 cout<<"enter the number to find their sum:"<<endl;
 cin>>n;
 for(int i =0; i<=n ;i++)
 {
    sum += i;
 }
cout<<"sum of "<<n<<" numbers:"<<sum<<endl;
return 0;
}
