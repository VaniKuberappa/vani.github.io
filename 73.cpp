#include<iostream>
#include<string>
using namespace std;


class person()
{
    private:
    string name;
    int age;
    public:
    person(string name, int age)
    {
        this ->name =name;
        this->age =age;
    }
    void setname(string name)
    {
        this ->name = name;
    }
    string getname()
    {
        return name;
    }
    void setage(int age)
    {
        this-> age = age;
    }

    int getage()
    {
        return age;
    }

};


int main()
{
    person person("vani",30);

    cout<<"name:"<<p

return 0;
}