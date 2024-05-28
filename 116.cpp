#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="vani";
    string s2 ="kuberappa";

    string result="";

    for(int i=0;i<=s1.length();i++)
    {
        result =result + s1[i];
    }

     for(int i=0;i<=s2.length();i++)
    {
        result =result + s2[i];
    }
    cout<<"string addition:  "<<result<<endl;
    return 0;
}