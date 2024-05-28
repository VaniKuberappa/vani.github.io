#include<iostream>
using namespace std;


class animal{

public:
string name;
int age;
animal(const string& n, int a) : name(n), age(a){}

 virtual void makesound() const
 {
    cout<<"generic animal sound:"<<endl;
    
 }

virtual void showinfo() const
{
    cout<<"name:" <<name <<",age "<<age<<endl;
}
};

class dog: public animal
{
    public:
    dog(const string& n, int a):animal(n,a){}
    void makesound() const override{
        cout<<"woof"<<endl;
    }
};

class cat: public animal{
 public:
 cat(const string& n, int a):animal(n,a){}

 void makesound() const override{
    cout<<"meow"<<endl;
 }
};

int main()
{

    dog d1("buddy",13);
    cat c1("wh",2);

    d1.makesound();
    c1.makesound();

    animal* ptr1 =&d1;
    animal* ptr2 =&c1;

    ptr1->makesound();
    ptr2->makesound();


    return 0;
}