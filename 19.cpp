#include<iostream>
using namespace std;

class date{
    private:
    int day;
    int month;
    int year;
    public:

    void set_month(int m)
    {
        month = m;
    }
    void set_day(int d)
    {
        day = d;
    }
    void set_year(int y)
    {
        year = y;
    }
    
   int get_month()
    {
        return month;
    }

    int get_day()
    {
        return day;
    }
    int get_year()
    {
        return year;
    }

    bool valid()
    {
        if (month <1 || month>12)
        {
            return false;
        }

        if (day<1 || day >31)
        {
            return false;
        }
      if (month == 4 || month == 6 ||month ==9 ||month ==11 && day >30)
      {
        return false;
      }

      if (month ==2)
      {
        if((year % 4 ==0 && year % 100 != 0)|| (year % 400 ==0))
        {
            if (day>29);
            return false;
        }
      }
      else{
        if(day>28)
        return false;
      }
    }

}; 

int main()
{
    int d=31;
    int m=4;
    int y=1996;
    
 date d1;
 d1.set_month(m);
 d1.set_year(y);
 d1.set_day(d);

 cout<<"month:"<<d1.get_month()<<" "<<"day:"<<d1.get_day()<< " "<<"year:"<<d1.get_year()<<endl;

 if(d1.valid()){
    cout<< "valid date:"<<endl;
 }
 else{
    cout<<"invalid date:"<<endl;
 }
 return 0;
}