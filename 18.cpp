#include<iostream>
using namespace std;

class employee{

    private:
    std::string name;
    int id;
    double salary;

    public:

    employee(const std::string &n, const int &i, const double &s): name(n), id(i),salary(s){};

    void check_performence(int performence)
    {
        if (performence>5 && performence <=8)
        {
            salary += 3000;
            cout<<"salary increased by 3%"<<endl;
        }

        else if(performence>8)
        {
            salary += 5000;
            cout<<"salary inscreased by 5%"<<endl;
        }
        else{
            cout<<"no hike this time"<<endl;
        }
    }


};

int main()
{
    employee e1("vani",5,5000);
    e1.check_performence(7);
    return 0;
}
