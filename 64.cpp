#include<iostream>
using namespace std;

class base{
    private:
    int x;
    protected:
    int y;
    public:
    base()
    {
        x=10;
        y=20;
    }
friend void friendfunction(base& obj);
};


void friendfunction(base& obj)
{
    cout<<"value of private varialbe:"<<obj.x<<endl;
    cout<<"protected variable:"<<obj.y<<endl;
}
int main()
{
    base ob1;
    friendfunction(ob1);
    return 0;
}