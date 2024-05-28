#include<iostream>
#include<string>
using namespace std;

int main()
{
    int size =8;
    int *dynamicarrint = new int[size];

    string *dynamicarrstr = new string[size];

cout<<"enter array elements"<<endl;
    for(int i=0;i<size; i++)
    {
           dynamicarrint[i] = i+1 ;
        cout<<dynamicarrint[i]<<endl;
    }

 for(int i =0;i<size; i++)
 {
    dynamicarrstr[i] = "element-" + std::to_string(i + 1);
    cout<<dynamicarrstr[i]<<endl;

 }
 delete[] dynamicarrint;
 delete[] dynamicarrstr;

return 0;
}