#include<iostream>
using namespace std;

int square1(int n)
{
    cout<<"address of n1 in square1() "<<&n<<endl;
    n *= n;
    return n;
}

void square2(int* n)
{
    cout<<"the addres of n2 in square2():"<< n <<endl;
    *n *= *n;

}

void square3(int& n)
{
    cout<<"address of n3 square()"<< &n <<endl;
     n *= n;
}
int main()
{

int n1 =8;

    return 0;
}