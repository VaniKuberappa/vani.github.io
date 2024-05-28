#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"ënter the size of the array";
    cin>>size;
    int *arr =new int[size];

    
    cout<<"enter the element"<<endl;

    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
        
    }
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    delete arr;
    return 0;
}