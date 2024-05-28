#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> stringset;

    stringset.insert("learn");
    stringset.insert("c++");
    stringset.insert("coding");
    stringset.insert("fast");

    string key ="slow";

    if (stringset.find(key) == stringset.end())
    cout<<key <<"not found"<<endl;
    else
    cout<<"found"<<key<<endl;

    key ="c++";
    if (stringset.find(key) == stringset.end())
    cout<<key <<"not found"<<endl;
    else
    cout<<"found"<<key<<endl;

    cout<<"all elements"<<endl;

    unordered_set <string>::iterator itr;
    for(itr = stringset.begin();itr != stringset.end();++itr){
        cout<<(*itr)<<endl;
    }







}