#include<iostream>
using namespace std;


class number{

    private:
    int a,b;

    public:
    number(int x,int y){
        a =x;
        b =y;
    }

    int gcd()
    {
        while(a != b)
        {
            if(a>b)
            {
                a =a-b;
            }
            else
            {
                b =b-a;
            }
        }
        return a;
    }


    bool isprime(int n)
    {
        if(n <= 1)
        {
            return false;
        }

        for(int i=2; i<n; i++)
        {
            if(n%2==0)
             return false;
        }
        return true;
    }
};

 class myprimeexception{};

int main()
{
     int x=13;
     int y =56;

     number num1(x,y);

     cout<<"gcd is ="<<num1.gcd() <<endl;

     if(num1.isprime(x))
     {
        cout<<x <<"is aprime number"<<endl;
     }  

     if (num1.isprime(y))
     {
        cout <<y<<"is a prime number"<<endl;
     }
    if((num1.isprime(x)) || (num1.isprime(y)))
    {
        try{
            throw myprimeexception();
        }
        catch (myprimeexception t)
        {
            cout<<"caught execption"<<"of primemyexception"<<"class"<<endl;
        }
    }

return 0;
}