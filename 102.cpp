#include<iostream>
using namespace std;

class student
{
    private:

    int roll_no;
    float marks;
    string name;

    public:
    student(int r,float m,string n):roll_no(r),marks(m),name(n){}
 void display()
 {
    cout<<"Name:"<<name<<endl;
    cout<<"roll_number:"<<roll_no<<endl;
    cout<<"marks:"<<marks<<endl;
 }

};



int main()
{
student s1(28,77.43,"vani");
s1.display();
return 0;
}

