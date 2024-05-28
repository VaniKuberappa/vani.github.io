#include<iostream>
#include<string>
using namespace std;

int main()
{

     char *ch = new char;
     string  *str = new string;

     cout<<"enter a character:"<<endl;
     cin>>*ch;
     cout<<"enter a string:"<<endl;
     cin>>*str;

     cout<<"the string is:"<<*str<<endl;
     cout<<"the character is:"<<*ch<<endl;

     delete str;
     delete ch;
    return 0;
}