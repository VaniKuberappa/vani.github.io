#include<iostream>
#include<map>
#include<iterator>

using namespace std;
int main(){

    multimap<int,int>g1;

    g1.insert(pair<int,int>(1,40));
    g1.insert(pair<int,int>(2,30));
    g1.insert(pair<int,int>(3,40));
    g1.insert(pair<int,int>(4,40));
    g1.insert(pair<int,int>(6,40));
    g1.insert(pair<int,int>(6,40));

    multimap<int,int>::iterator itr;
    cout<<"the multimap"<<endl;

    for(itr =g1.begin();itr != g1.end(); ++itr){

        cout<<itr->first << " \t"<< itr->second<<endl;
    }
return 0;
}
