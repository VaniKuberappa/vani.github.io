#include<iostream>
using namespace std;

class complex{
    private:
    double real;
    double imag;

    public:
    complex(double r ,double i): real(r),imag(i){}

    complex operator+(const complex& other)const{


        return complex(real+other.real, imag+other.imag);
    }

    void display()const
    {
        std::cout<<real<<"+"<<imag<<"i"<<endl;
    }

};
int main()
{

complex c1(4,5);
complex c2(2,1);

complex result = c1+c2;
cout<<"result:   ";
result.display();



    return 0;
}