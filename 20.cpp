#include<iostream>
using namespace std;

class student{
    private:
    int rollnumber;
    std::string name;
    int cls;
    double marks;
    public:

    student(const int &r, const int &c, const double &m, const std::string &n):rollnumber(r),name(n),marks(m),cls(c){};

    void display()
    {
        char g;
        if(marks<35)
        {
            g ='c';
        }
        else if (marks >=35 && marks <=60 )
        {
            g ='b';
        }
        else if (marks>60 && marks <=85)
        {
            g='a';
        }
        else{
            g ='*';
        }

        cout<<"student details:"<<endl;
        cout<<" name:"<<name<<endl;
        cout<<"rollnumber:"<<rollnumber<<endl;
        cout<<"class:"<<cls<<endl;
        cout<<"grade:"<<g<<endl;
    }



};

int main()
{
    student s1(10,10,90,"vani");
    s1.display();
    return 0;
}