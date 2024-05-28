#include<iostream>
#include<set>
using namespace std;
//set

int main()
{
    set<int, greater<int>> s1;

    s1.insert(0);
    s1.insert(99);
    s1.insert(-7);
    s1.insert(666);
    s1.insert(0);
    
    for(auto i :s1){
        cout << i <<endl;
    }
cout<<s1.size()<<endl;
cout<<s1.max_size()<<endl;

return 0;
}
