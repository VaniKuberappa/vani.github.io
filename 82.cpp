#include<iostream>
using namespace std;


class car{
public:
 int year;
 string model;
 string color;

car (int y, const string& m,const string& c):year(y), model(m), color(c){};

 void display()
 {
     cout<<"model: "<<model<<"year: "<<year<<"color: "<<color;
 }
 void changecolor(const string& newcolor)
 {
    color = newcolor;
    cout<<"color changed to:"<<color<<endl;
 }
};

int main()
{
car mycar(2021,"Honda Elevate","white");
mycar.display();
mycar.changecolor("red");
mycar.display();
return 0;
}