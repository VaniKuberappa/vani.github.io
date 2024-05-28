#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x = 2;
    int y = 2;

    float **dynamicarrfloat =  new  float *[x];
    string **dynamicarrstr =  new  string *[x];


for(int i =0;i<x ;i++)
{
    dynamicarrfloat[i] = new float[y];
}

for(int i =0;i<x;i++)
{
    dynamicarrstr [i] = new string[y];
}
    for(int i =0;i<x ;i++)
    { 
        for(int j =0 ;j<y;j++)
        {
            dynamicarrfloat[i][j]= 3.14 + i+1;
            cout<<dynamicarrfloat[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i =0;i<x ;i++)
    { 
        for(int j =0 ;j<y;j++)
        {
            
            dynamicarrstr[i][j] = "ht" + std::to_string(i+1);
            cout<<dynamicarrstr[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i =0;i<x;i++)
    {
        delete[] dynamicarrfloat[i];
        delete[] dynamicarrstr[i];
    }
    delete[] dynamicarrfloat;
    delete[] dynamicarrstr;

    return 0;

}