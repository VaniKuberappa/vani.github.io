#include<iostream>
#include<vector>
using namespace std;


template <typename  T>

class queue
{
    private:
   
    vector <T> v;
    public:
 
    void enque(const T& value)
    {
       v.push_back(value);
    }


    void display()
    {
        if(isempty())
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"que elements"<<endl;
            for(const T& element : v)
            {
                cout<<element<<" ";
            }
        }
      cout<< v.front();
    }

    
    void deque()
    {
        
        if(isempty())
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            v.erase(v.begin());
        }
       
    }

    bool isempty() const
    {
        return v.empty();
    }
};

int main()
{

    queue<int> q;

    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    

    q.display();

    q.deque();

    q.display();


    return 0;
}