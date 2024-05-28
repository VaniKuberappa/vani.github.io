#include<iostream>
#include<string>
using namespace std;

int main()
{

 int *dynamicint = new int;
 *dynamicint = 20;

 char *dynamicchar = new char;
 *dynamicchar ='c';

string *dynamicstr = new string;
*dynamicstr = "everything will be okay";

cout<<"dynamically created int:"<< *dynamicint <<endl;
cout<<"dynamically created char:"<<*dynamicchar<<endl;
cout<<"dynamically created string:"<<*dynamicstr<<endl;

delete dynamicchar;
delete dynamicint;
delete dynamicstr;

return 0;


}
