#include<iostream>
using namespace std;

class sample{
 int id;
    public:
    void init(int x)
    {
        id =x;
    }
    sample(){}

    sample(sample &t)
    {
        id =t.id;
    }

    void display()
    {
        cout<<endl<<"id ="<<id;
    }
};
int main()
{
    sample s;
    s.init(10);
    s.display();

    sample s2(s);
    s2.display();
   
    return 0;
}