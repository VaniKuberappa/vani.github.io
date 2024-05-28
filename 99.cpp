#include<iostream>
#include<thread>
using namespace std;

void thread_function()
{
    cout<<"thread function"<<endl;
}

int main()
{
    thread t(&thread_function);
    cout<<"main thread"<<endl;
    t.join();
    return 0;
}