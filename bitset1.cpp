#include<iostream>
#include<bitset>

using namespace std;

int  main()
{
    bitset<4> b;
    bitset<4> mask("1111");

    if(!b.all())
    {
        cout<<"all bits are not set"<<endl;
    }

    b |= mask;
    if(b.all())
    cout<<"all bit are set"<<endl;
    return 0;
}
