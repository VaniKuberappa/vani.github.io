#include<iostream>
using namespace std;

int main()
{
    try
    {
        {
            throw 10;
        }
    }
    catch(char *exception)
    {
       cout<< "caught" <<exception;
    }

    catch (...)
    {
        cout<<"default";
    }

    return 0;
}