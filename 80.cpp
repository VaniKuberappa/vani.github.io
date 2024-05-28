#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int items{};
    cout<<"enter the number of items:"<<endl;
    cin>>items;

 vector<int> s{};
for(int i=1;i<=items; i++)
{
    int data_item{};
    cout<<"enter data in the item list:"<<endl;
    cin>>data_item;
    s.push_back(data_item);
}

cout<<"list of items are here:"<<endl;

for(auto i:s)
{
    cout<<i<<endl;
}
return 0;

}