#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    int x;
    int y;
    cout<<"enter two numbers to get sum:"<<endl;
    cin>>x;
    cin>>y;
    cout<<"the sum of two given numbers is:"<< x <<"and" <<y <<" is:"<<sum(x,y)<<endl;
    return 0;
}