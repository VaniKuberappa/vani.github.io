#include<iostream>
#include<thread>

void hello()
{
    std::cout<<"hello thread"<<std::endl;
}
int main()
{
thread thr(hello);
thr.join();
return 0;
}
