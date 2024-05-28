#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

void displaylist(node *head)
{
    node *current = head;
    while(current != nullptr)
    {
        cout<<current -> data <<" ";
        current = current -> next;

    }
cout<<endl;
}

void insertionbeginning(node * & head, int value)
{
    node *newnode = new node;
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
}

void deletenode(node * & head, int value)
{
    if (head == nullptr)
    {
        return;
    }
    if(head -> data == value)
    {
        node * temp = head;
        head = head -> next;
        delete temp;
        return;
    }
    node *current = head;
    while(current -> next != nullptr)
    {
        if(current ->next)
        {
            node * temp = current-> next;
            current -> next = temp -> next;
            delete temp;
            return ;
        }
    }
    current = current -> next;
}

void deletelist( node * &head)
{
    node *current = head;
    while(current != nullptr)
    {
        node *temp = current;
        current = current -> next;
        delete temp;
    }
    head = nullptr;
}
int main()
{

    node * head = nullptr;
    insertionbeginning(head,1);
    insertionbeginning(head,13);
    insertionbeginning(head,4);
    insertionbeginning(head,8);
    insertionbeginning(head,9);
cout<<"initila list:"<<endl;
displaylist(head);

cout<<"remove node 3"<<endl;
deletenode(head,3);

cout<<"update list"<<endl;
displaylist(head);

deletelist(head);
    return 0;
}