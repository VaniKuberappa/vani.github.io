#include<iostream>
using namespace std;

class bank{
    float balance;

    public:

    bank(float b) : balance(b){}
    float deposit = 0;


    void putdeposit(float x)
    {
        balance =+ x;
    }
   float getdeposit()
   {
    return deposit;
   }
    void withdraw(float y)
    {
        balance = deposit - y;
        cout<<"the remaining amount after withdraw is:"<<balance<<endl;
    }

    void display_balance()
    {
        cout<<"the balance after transactions"<<balance<<endl;
    }
};

int main()
{

    bank b1(0);
    b1.putdeposit(5000);
    cout<<"the deposit at your account is: "<<b1.getdeposit()<<endl;
    b1.withdraw(300);
    b1.display_balance();
    return 0;
}