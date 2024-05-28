#include <iostream>
using namespace std;


#define pi 3.14

class circle{
    private: 
    int r;

    public:
    void setradius(int radius)
    {
        int r = radius;
    }
    void area()
    {
       float area = pi * r * r;
        cout<<"are of a circle is:"<< area <<endl;
    }
    
    
};

int main(void){
     
     circle c1;
     int radius = 7;
     c1.setradius(radius);
     c1.area();
    return 0;
}
