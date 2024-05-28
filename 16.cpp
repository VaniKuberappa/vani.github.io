#include<iostream>
#include<string>
using namespace std;

class bankaccount
{
    private:
    int accountnumber;
    double balance;

    public:

    bankaccount(const int &acc, const double &bl ):accountnumber(acc),balance(bl){};


    double deposit(double dp)
    {
        cout<<"account number:"<<accountnumber<<endl;
       double  deposit = dp;
        balance +=  deposit;
        cout<<"the deposited amount is:"<<deposit<<endl;
        cout<<"the current amount in bank account is"<<balance<<endl;
    }

    double withdraw(double wt){
         cout<<"account number:"<<accountnumber<<endl;
        if (balance < 500){
            cout<<"the balance amount is less than 500"<<balance<<endl;
        }
        else{
            balance -=  wt;
            cout<<"the balance amount after withdraw is:"<<balance<<endl;
        }
    }
};


int main()
{

    double dp;
    double wt;
    int acc;

    bankaccount b1(123467,50000);

    b1.withdraw(1000);
    b1.deposit(789);
   
    return 0;

}