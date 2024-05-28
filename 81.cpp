#include<iostream>
using namespace std;


class car{
public:
 int year;
 string model;
 string color;

 void display(int y,string m,string c)
 {
     year =y;
     model = m;
     color = c;
     cout<<"the model is"<<m<<"year manufactured is"<<y<<"color is"<<c;
 }

};

int main()
{
car c;
c.display(2021,"Honda Elevate","white");
return 0;
}