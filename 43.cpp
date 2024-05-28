#include<iostream>
using namespace std;

class test
{
    private: int x;

    public:

    void display()
    {
        cout<<"try everday:"<<endl;
    }
};
int main()
{
    test *t1 = new test;
    t1 ->display();


    return 0;
}