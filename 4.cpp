#include<iostream>
#include<utility>
using namespace std;
//pair
int main(){

    pair<char,int> pair1 = make_pair ('A',1);
    pair<char,int> pair2 = make_pair ('B',2);
    
    cout<<"before swapping"<<endl;
    cout<<"pair1 value"<<pair1.first<< " " <<pair1.second<<endl;
    cout<<"pair2 value"<<pair2.first<< " " <<pair2.second<<endl;

    pair1.swap(pair2);

    cout<<"after swapping"<<endl;
    cout<<"pair1 value"<<pair1.first<< " " <<pair1.second<<endl;
    cout<<"pair2 value"<<pair2.first<< " "<<pair2.second<<endl;
   return 0;
}