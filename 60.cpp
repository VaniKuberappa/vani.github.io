#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool test(vector<int> num)
{
    sort(num.begin(),num.end());
    for(int i =0; i<num.size() -1;i++)
    {
        if(num[i+1] != (num[i]+1))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> num = {1,2,5,7,4,3,6};
    cout<<"check for consective numbers in the said vector!  " <<test(num)<<endl;

    return 0;
    
}