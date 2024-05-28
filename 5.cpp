#include<iostream>
#include<set>
#include<iterator>

using namespace std;
/// @brief multiset
/// @return 
int main()
{
    multiset <int ,greater <int>> g1;

    g1.insert(30);
    g1.insert(10);
    g1.insert(50);
    g1.insert(20);
    g1.insert(60);
    g1.insert(40);
    g1.insert(50);

    multiset<int ,greater <int>>::iterator itr;
    cout<<"the multiset values"<<endl;
    for(itr =g1.begin();itr!=g1.end();++itr){
        cout<<*itr<<endl;
    }

    g1.erase(g1.begin(),g1.find(30));
    cout<<"the multiset values"<<endl;
    for(itr =g1.begin();itr!=g1.end();++itr){
        cout<<*itr<<endl;
    }
    
return 0;
}