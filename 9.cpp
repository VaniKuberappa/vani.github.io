#include<iostream>
#include<queue>
using namespace std;

//priority queue

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    priority_queue<int> pq;

    cout<<"array"<<endl;

    for(auto i:arr){
        cout<<i<<endl;
    }
    for(int i=0; i< 6; i++){
        pq.push(arr[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<  "\t"; 
        pq.pop();
      
    }

      return 0;
}