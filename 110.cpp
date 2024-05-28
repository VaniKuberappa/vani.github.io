#include <iostream>  
#include <bitset>  
using namespace std;  
int main()  
{  
bitset<4> b(string("0101"));  
cout<<b.flip()<<endl;  
cout<<b.flip(2)<<endl;
cout<<b.flip(1);
return 0;  
}  