#include<iostream>
#include<map>
#include<string>
using namespace std;
//map
int main()
{
    map<string,int >mp;

    mp["one"] =1;
    mp["two"] =2;
    mp["three"]=3;

    map<string,int>::iterator it =mp.begin();

    while(it != mp.end())
    {
        cout<<"key:" <<it ->first << "value "<<it->second<<endl;
        ++it;
    }
    cout<<"sizeof map"<< mp.size()<<endl;

return 0;

}