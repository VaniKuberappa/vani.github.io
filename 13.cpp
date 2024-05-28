#include<iostream>
#include<string>
using namespace std;

class person
{
    private:
    int age;
    string name;
    string country;

    public:
    void set(int a,string n,string c)
    {
        age = a;
        name =n;
        country =c;
    }

   int getage()
    {
        return age;
    }
string getname(){
    return name;
}
 string getcountry()
 {
    return country;
 }

};

int main()
{

  person p;
  int a =26;
  string n ="vani";
  string c ="india";
  p.set(a,n,c);
 cout<<"age:"<<p.getage()<<endl;
        cout<<"name:"<<p.getname()<<endl;
        cout<<"country:"<<p.getcountry()<<endl;
  return 0;
}