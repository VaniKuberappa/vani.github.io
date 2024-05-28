#include<iostream>
using namespace std;


class gfg{
    private:
    int x;
    protected:
    int y;
    public:
    gfg()
    {
        x=10;
        y=20;
    }
 friend class f;
};

class f{
    public:
    void display(gfg& t)
    {
        cout<<"the value of private variable:"<<t.x<<endl;
        cout<<"the value of prtotected variable:"<<t.y<<endl;
    }
};
int main()
{
    gfg g;
    f f1;
    f1.display(g);
    return 0;
}