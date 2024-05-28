#include<iostream>
#include<deque>
using namespace std;

//double ended queue

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for(it=g.begin();it != g.end();++it)
    {
        cout<<*it<<endl;
    }
}

int main()
{
    deque <int> g1;
    g1.push_back(10);
    g1.push_front(20);
    g1.push_back(30);
    g1.push_front(40);

    cout<<"deque values are:"<<endl;

    showdq(g1);

    cout<<g1.size()<<endl;
    cout<<g1.at(2)<<endl;
    cout<<g1.max_size()<<endl;
    cout<<g1.front()<<endl;
    cout<<g1.back()<<endl;

    g1.pop_back();
    showdq(g1);

    g1.pop_back();
    showdq(g1);

    return 0;
}