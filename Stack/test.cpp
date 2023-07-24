// Queue using array
#include <bits/stdc++.h>
const int MAX_SIZE = 500;
using namespace std;
class Queue
{
    public:
    int a[MAX_SIZE];
    int l, r;
    Queue()
    {
        l = 0;
        r = -1;
    }
    void enqueue(int value)
    {
        if (r + 1 >= MAX_SIZE)
        {
            cout << "Queue is full\n";
            return;
        }
        r = r + 1;
        a[r] = value;
    }
    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is empty";
            return;
        }
        l++;
    }
    int front()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return r-l+1;
    }
};
int main()
{
Queue q;
q.enqueue(10);
q.enqueue(15);
cout<<q.front()<<"\n";
q.dequeue();
cout<<q.front()<<"\n";

q.dequeue();
cout<<q.front()<<"\n";
    return 0;
}
