#include<iostream>
#include<fstream>
#include<stdexcept>
using namespace std;



class student_record
{
private:
string name;
int std;
float marks;

public:

student_record(const string& n,int s, float m):name(n),std(s),marks(m){}

void write()
{
    ofstream  record("record.txt",ios::app);
  
    try{
        if(record.is_open())
    {
        record<<"name: " <<name<<"std: "<<std<<"marks: "<<marks;
        cout<<"addedd susccessfully"<<endl;
          record.close();
    }
    else
    {
        throw runtime_error("error:unable to open file");
    }

    }
    catch(const runtime_error& e)
    {
        cerr<<e.what()<<endl;
    }
}
void read()
{
    
    cout<<"name: " <<name<<"std: "<<std<<"marks: "<<marks;
}

};



int main()
{

student_record s("vani",12,70.23);
s.write();
s.read();

    return 0;
}