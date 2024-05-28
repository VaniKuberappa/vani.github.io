#include <iostream>
#include <thread>
using namespace std;

void foo(int z)
{
    for(int i =0; i<z ; i++)
    {
        cout<<"thread using function pointer as callable\n";
    }
}


class thread_obj
{
    public:
    void operator()(int x)
    {
        for(int i =0;i<x;i++)
        cout<<"thread using function objectsa as callable\n";
    }
};

class base{

    public:
    void foo()
    {
        cout<<"thread using non-static member function as callable"<<endl;

    }

    static void foo1()
    {
        cout <<"thread using static member function as callable:"<<endl;
    }
};

int main()
{
    cout<<"thread 1and 2 and 3 öpearting inependtly "<<endl;

    thread th1(foo, 3);
    thread th2(thread_obj(),3);

    auto f = [](int x){
        for(int i =0 ;i<x; i++)
        cout<<"thread using lambda expression as callable"<<endl;
    };

    thread th3(f,3);

    base b;

    thread th4(&base::foo,&b);
    thread th5(&base::foo1);

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();

    return 0;
}