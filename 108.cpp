#include <iostream>  
#include <bitset>  
using namespace std;  
int main()  
{  
bitset<4> b1(string("0000"));  
int result=b1.count();  
cout<<b1 << " has" <<' ' << result <<" bits";  

return 0;  
}  