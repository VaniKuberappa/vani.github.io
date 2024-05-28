#include<iostream>
using namespace std;


class triangle{

    private:
    int side1;
    int side2;
    int side3;

    public:

    triangle( int s1, int s2,  int s3):side1(s1),side2(s2),side3(s3){};

    void check()
    {
        if(side1 == side2 && side2 == side3 )
        {
            cout<<"equilateral triangle:"<<endl;
        }

        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            cout<<"isosclenes traingle:"<<endl;
        }

        else{
            cout<<"scalene triangle:"<<endl;
        }
    }

};
int main()
{
    triangle t1(3,1,2);
    t1.check();
    return 0;
}
