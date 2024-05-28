#include<iostream>
using namespace std;

int main()
{
        char selection;

 do
 {
    cout<<"1 to do this:"<<endl;
    cout<<"2 do that:"<<endl;
    cout << "3 do nothing"<<endl;
    cout<<"q for quit"<<endl;

    cout<<"select something:"<<endl;
    cin>>selection;

    if(selection == '1')
        cout<<" do this"<<endl;
    else if(selection =='2')
        cout<<"do that"<<endl;
    else if (selection == '3')  
        cout<<"do nothing"<<endl;
    else
        cout<<"quit the selection"<<endl;          



 } while (selection =='q');
 




    return 0;
}