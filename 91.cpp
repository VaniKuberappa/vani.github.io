#include<iostream>
#include<fstream>
using namespace std;


int main()
{

    ofstream t;
    t.open("text.txt");
    t<<"my first file handling example";
    t.close();

    return 0;
}