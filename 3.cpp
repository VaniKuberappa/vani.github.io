#include<iostream>
#include<utility>
//pair
using namespace std;

int main()
{
    pair <int ,char> pair1;
    
    pair <int,char> g2(1,'b');
    pair1.first =100;
    pair1.second ='g';
    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;
     g2 = make_pair(1,'a');
   return 0;
}