#include<iostream>
using namespace std;

int add(int a[], int x)
{
   if(x ==0)
   {
     return 0;
   }
   return a[x-1]+add(a,x-1);
}
int main(){

    int n;
    int arr[n];
    cout<<"enter the size of arrays:"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;

    for(int i =0;i<=n-1;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    
    int sum = add(arr,n);
    cout<<"addtion of array elements:"<<sum<<endl;
    return 0;
}