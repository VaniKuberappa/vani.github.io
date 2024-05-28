#include<iostream>
#include<set>
using namespace std;
//set
int main()
{

    set<char> a;
    a.insert('a');
    a.insert('b');
    a.insert('c');
    a.insert('d');

    for(auto& str: a)
    {
    cout<<str<<endl;
    }
return 0;

}