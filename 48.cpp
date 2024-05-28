#include<iostream>
using namespace std;

class queue{
 private:
 int *num;
 int front;
 int rear;
 int size;
 int capacity;

 public:
 queue(int queuesize)
 {
    capacity = queuesize;
    num = new int[capacity];
    front =rear = -1;
    size =0;
 }

 ~queue()
 {
    delete[] num;
 }

 void enqueue(int value)
 {
    if (size == capacity)
    {
        cout<<"queue overflow: cannot enqueue elements"<<endl;
        return;
    }

    rear = (rear+1)%capacity;
    num[rear] = value;
    size++;
    if(front == -1)
    {
        front = rear;
    }

    cout<<"enqueued element:"<<value<<endl;
 }

void dequeue()
{
    if(size ==0)
    {
        cout<<"queue underflow,cannot dequeue from an empty queue"<<endl;
        return;
    }

    int value = num[front];
    front =(front +1)%capacity;
    size --;
    cout<<"dequed element"<<value<<endl;
    if(size == 0)
    {
        front =rear = -1;
    }
}
};


int main()
{
    int queuesize =5;
    cout<<"size of queue:"<<queuesize<<endl;
    queue queue(queuesize);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.dequeue();
    queue.dequeue();
      queue.dequeue();
       queue.dequeue();
        queue.dequeue();

return 0;

}