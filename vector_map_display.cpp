#include<iostream>
#include<map>
#include<vector>
using namespace std;


int main()
{
 
 vector<int> v ={1,2,3,4,5,6,7};
 for (auto i: v)
 cout<<i<<endl;

 for(int n: {1,2,3,4,5,6,7})
 cout<<n<<endl;

 int a[] ={1,2,3,4,5,6,7};
 for (int n:a)
 cout<<n<<endl;

 std::string str ="greeks";
 for(char c:str)
 cout<<c<<endl;

 map<int,int> m({{1,2},{2,2},{3,3}});

for (auto i: m)
cout<<i.first <<"  "<<i.second <<endl;

    return 0;
}
