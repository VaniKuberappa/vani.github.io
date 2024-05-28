#include<iostream>
using namespace std;

class base;


class anotherclass{
    public:
    void memberfunction(base& obj);
};

class base{
    private:
    int x;
    protected:
    int y;
    public:

    base()
    {
        x =10;
        y= 20;
    }
friend void anotherclass::memberfunction(base&);    
};

void anotherclass::memberfunction(base& obj)
{
    cout<<"private varaible:"<<obj.x<<endl;
    cout<<"protected variable:"<<obj.y<<endl;

}
int main()
{
 base b1;
 anotherclass a2;
 a2.memberfunction(b1);
    return 0;
}