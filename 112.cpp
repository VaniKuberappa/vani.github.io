#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,num,n3;
    cout<<"enter the series"<<endl;
    cin>>num;
    cout<<n1<<"  "<<n2<<"  ";
    for(int i=2; i<num; ++i)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}