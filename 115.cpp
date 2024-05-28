#include<iostream>
using namespace std;

int  main()
{
    char s[5]={'v','a','n','i'};
    string j ="";
    int  size = sizeof(s)/sizeof(char);
    for(int i=0;i<=size;i++)
    {
        j= j+s[i];
    }

    cout<<j<<endl;


    return 0;
}