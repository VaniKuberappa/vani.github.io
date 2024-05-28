#include<iostream>
#include<fstream>
using namespace std;

class studentrecord{

    private:

    string name;
    int standard;
    float  marks; 

    public:

    studentrecord( const string& n, int st, float m):name(n),standard(st),marks(m){}

    void read()
    {
        cout<<"name:"<<name<<"  class:"<<standard<<"  marks:"<<marks<<endl;
    }

void write()
    {
         ofstream record("rd.txt",ios::app);

         if(record.is_open())
         {
            record<<"name:"<<name<<"  class:"<<standard<<"  marks:"<<marks;
            record.close();
            cout<<"successfully addded"<<endl;
         }
         else{
            cerr<<"unable to write:"<<endl;
         }
        
    }


};

int main()
{
 
studentrecord s1("vani",12,72.0);
s1.read();
s1.write();




    return 0;
}