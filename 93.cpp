#include<iostream>
#include<stdexcept>
using namespace std;

class calculator{
private:
float a;
float b;

public:

calculator(float x, float y):a(x), b(y){}


void addition()
{
    cout<<"adding two numbers:  "<<a<<" and "<<b<<" is "<< a+b <<endl;
}

void substraction()
{
    cout<<"substractinhg two numbers:" <<a<<" and "<<b<<" is "<< a-b <<endl;
}

void multiplication()
{
    cout<<"multiplication ogf two numbers: "<<a<<" and "<<b<<" is "<< a*b <<endl;
}

void division()
{
    try
    {
        if (b ==0)
        {
            throw runtime_error("divide by zero error:");
        }
        cout<<"division of two numbers: "<<a<<" and "<<b<<" is "<< a/b <<endl;
    }

    catch(runtime_error& e)
    {

        cerr<<e.what()<<endl;
    }
}
};



int main()
{

    calculator c1(4,8);
    
    c1.addition();
    c1.substraction();
    c1.multiplication();
    c1.division();
    return 0;
}