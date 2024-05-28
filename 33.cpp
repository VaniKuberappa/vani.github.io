#include<iostream>
using namespace std;

int third(int x,int y)
{
    return 180 -(x+y);
}

int main()
{
    int x;
    int y;
    
    cout<<"enter the angles"<<endl;
    cin>>x;
    cin>>y;
    
    cout<<"the third angle is:"<<third(x,y)<<endl;
    return 0;

}