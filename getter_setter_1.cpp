#include<iostream>
#include<string>
using namespace std;

class car
{
    private: 
    string model;
    string company;
    int year;
    public:
   void  set_model(string m)
   {
    model = m;
   }
   void  set_company(string c)
   {
   company = c;
   }
   void  set_year(int y)
   {
   year = y;
   }

   string get_model()
   {
    return model;
   }
   string get_company()
   {
    return company;
   }
  int get_year()
   {
    return year;
   }
};
int main()
{
    car c1;
    string m="XUV700";
    string c = "TATA";
    int y = 2021;

    c1.set_model(m);
    c1.set_company(c);
    c1.set_year(y);

    cout<<"the car model is: "<<c1.get_model()<<endl;
    cout<<"the car company is: "<<c1.get_company()<<endl;
    cout<<"the maufactured year of the car:"<<c1.get_year()<<endl;
    return 0;

}

