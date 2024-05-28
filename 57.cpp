#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> v)
{
    for_each(v.begin(),v.end(),[](int i)
    {
        cout<<i<<endl;
    });
}

int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};

    printvector(v);

    vector<int>::iterator p = find_if(v.begin(),v.end(),[](int i)
    {
        return i>4;
    });
    cout<<"first number greater than 4:"<<*p<<endl;
}