#include<iostream>;
using namespace std;

class car{
private:
std::string company;
std::string model;
int year;
public:
 car(const std::string &comp ,const std::string &mdl, int yr):company(comp), model(mdl),year(yr)
 {}
 std::string get_model()
 {
    return model;
 }
 std::string get_company()
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
 std::string c;
 std::string m;
 int y;

 car c1("audi","a6",2023);
 cout<<"the car company is: "<<c1.get_company()<<endl;
 cout<<"the car model is: "<<c1.get_model()<<endl;
 cout<<"the manufactured year :"<<c1.get_year()<<endl;
 
return 0;
}