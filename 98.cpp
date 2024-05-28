#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int value) : data(value), next(nullptr){}
};


class linkedlist
{
    private:
    node* first;
    node* last;

    public:
 linkedlist():first(nullptr),last(nullptr){}

    void insert_begin(int value)
      {
        node* newnode = new node(value);
        if(!first)
        {
            first = last = newnode;
        }

        else{
            newnode->next = first;
            first = newnode;

        }
      }



      void insert_end(int value)
      {
         node* newnode = new node(value);
         if(!first)
         {
            first = last =newnode;
         }
         else{
            last->next = newnode;
            last = newnode;
         }
      }

     void deletenode(int value)
      {
        if(!first)
        {
            cout<<"list is empty:"<<endl;
            return;
        }
        node* current =first;
        node* prev = nullptr;

        while(current && current->data != value)
        {
            prev = current;
            current = current->next;
        }
        if(!current)
        {
            cout<<"node with value"<<value <<"not found"<<endl;
            return ;
        }

        if(prev)
        {
            prev->next = current->next;
        }
        else
        
        {
            first = current->next;
        }


        delete current;

      }
     void display()
      { 
         node* current = first;
          while(current)
          {
            cout<<current->data<<" ";
            current = current->next;
          }
          cout <<endl;
      }
};
int main()
{

     
 linkedlist list;
 list.insert_begin(10);
 list.insert_begin(20);
 list.insert_end(2);
 list.display();

 list.deletenode(2);
 list.display();



    return 0;
}