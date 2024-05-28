#include<iostream>
#include<string>
using namespace std;

class book
{
    public:
    string author;
    int year;
    string title;

    book(const string&a, int y,const string& t):author(a),year(y),title(t){

        cout<<"constructor called:'"<<endl;
        cout<<"author:"<<author<<endl<<"year published:"<<year<<endl<<"title:"<<title<<endl;
    }
        

    ~book()
    {

        cout<<"destructor called"<<endl;
    }

};
int main()
{
  
book b("kuvempu",1965,"mane");
    return 0;
}