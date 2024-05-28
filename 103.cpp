#include<iostream>
using namespace std;


class bank
{
    private:
    unsigned long account_number;
    float balance;
    float amount;

    public:
    int count{0};
    bank(unsigned long acc,float b,float am):account_number(acc),balance(b),amount(am){}

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
       do() {
            if (balance>=amount)
        {
            balance = balance - amount;
            cout<<"after withdrawing : "<< amount<<" $"<<"the balance available in your account is:"<<balance<<"$"<<endl;
        }
        else if(balance <= 0)
        {
            cout<<"invalid number"<<endl;
            cout<<"please enter valid number"<<endl;
        }
        else
        {
            cout<<"you have low balance:"<<balance<<"$"<<endl;
        }
         } while(count++);     
    }

 void get_balance()
 {
    cout<<"the balance at your account: "<<balance<<"$"<<endl;
 }
    
 };





int main()
{
bank b1(1234,0,5000);
b1.deposit(700);
b1.withdraw(200);
b1.get_balance();
return 0;
}