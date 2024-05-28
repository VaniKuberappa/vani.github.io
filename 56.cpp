#include<iostream>
using namespace std;
 int sum(int* x, int* y)
 {
    return *x + *y;
 }

int main()
{
    int a =3;
    int b =4;
    cout<<"sum of a and b:"<<sum(&a, &b)<<endl;
    return 0;
}