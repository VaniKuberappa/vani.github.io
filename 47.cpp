#include<iostream>
using namespace std;


class stack
{
    private:
    int *array;
    int top;
    int capacity;

    public: stack(int size)
    {
        capacity = size;
        array = new int [capacity];
        top = -1;
    }

    ~stack()
    {
        delete[] array;
    }

    void push(int value)
    {
        if (top == capacity -1 )
        {
            cout<<"stcak is overflow cannot push element"<<value<<endl;
        }

        array[++top]= value;
        cout<<"pushed element"<<value<<endl;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"stcak underflow,cannot pop from an empty stack"<<endl;
            return ;
        }
        int value = array[top--];
        cout<<"poped element:"<<value<<endl;
    }
};



int main()
{

 int size = 5;
 cout<<"size of the satck:"<<size<<endl;

 stack stack(size);

 stack.push(1);
 stack.push(2);
 stack.push(3);
 stack.push(4);
 stack.push(5);

 cout<<"popped elements from the above stack "<<endl;
 stack.pop();
 stack.pop();
 stack.pop();
 stack.pop();
 stack.pop();
    return 0;
}