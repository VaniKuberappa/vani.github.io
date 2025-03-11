#include<iostream>
#include <string>
using namespace std;

 string manipulation(string s)
 {
    int length = s.length()-1;
    char first = s.at(0);
    char last = s.at(length);
    s.at(0) = last;
    s.at(length) = first;
     return s;
 }

int main()
{
    string str;
    cout<<"enter a string to swap first and last characters of the "<<endl;
    cin>>str;
   
    cout<<"converted string is:"<<manipulation(str)<<endl;
    return 0;
}
