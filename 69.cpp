#include<iostream>
using namespace std;

class student
{
    int rno;
    char name[50];
    double fee;

    public:
    student()
    {
        cout<<"enter the roll no"<<endl;
        cin>>rno;
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the fee:"<<endl;
        cin>>fee;
    }

    void display()
    {
        cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}