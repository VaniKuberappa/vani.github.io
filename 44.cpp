#include<iostream>
#include<string>
using namespace std;

struct s  {
    int id;
    std::string name;
    std::string country;

};

int main()
{

s *employee = new s;
cout<<"employee id:"<<endl;
cin>>employee->id;
cout<<"employee name"<<endl;
cin>>employee->name;
cout<<"employee country"<<endl;
cin>>employee->country;

delete employee;
  return 0;  
}