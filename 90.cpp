#include<iostream>
#include<vector>
using namespace std;

template <typename T>

class stack
{
    private:
    vector<T> elements;

    public:
    void push(const T& value)
    {
        elements.push_back(value);
    }

    void pop()
    {

        if(!isempty())
        {
            elements.pop_back();
        }
        else
        {
            cout<<"stack acnnot open"<<endl;
        }
    }

    void displaytop() const{

        if(!isempty())
        {
            cout<<"top element"<<elements.back()<<endl;
        }

        else
        {
            cout<<"cannot open"<<endl;
        }
    }

    bool isempty() const
    {
        return elements.empty();
    }

};



int main()
{

    stack<int> intstack;

    intstack.push(10);
    intstack.push(20);
    intstack.push(30);

    intstack.displaytop();

    //intstack.pop();

    //intstack.displaytop();




    return 0;
}

