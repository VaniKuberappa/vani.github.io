#include<iostream>
using namespace std;


class line{
    public:
    void setlength(double len);

    double getlength(void);
    line (double len);
    private:
    double length;
};

line::line(double len)
{
    cout<<"öbject is being created:"<<len<<endl;
    length = len;
}

void line::setlength(double len)
{
    length =len;
}

double line::getlength(void)
{
    return length;
}
int main()
{
    line line(10.0);
    cout<<"length of line:"<<line.getlength()<<endl;
    line.setlength(6);
    cout<<"length of line:"<<line.getlength()<<endl;
return 0;
}