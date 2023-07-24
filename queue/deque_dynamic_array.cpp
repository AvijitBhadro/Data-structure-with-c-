#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *a;
    int q_size;
    int array_cap;
    int l, r;

    Queue()
    {
        a = new int[1];
        array_cap = 1;
        q_size = 0;
        l = 0;
        r = -1;
    }

    void increase_size()
    {
        int *tmp;
        tmp = new int[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
            tmp[i] = a[i];
        swap(a, tmp);
        delete[] tmp;
        array_cap = array_cap * 2;
    }
    void enqueue(int value)
    {
        if (q_size+1 >= array_cap)
        {
            increase_size();
            return;
        }
        r++;
        a[r] = value;
        q_size = q_size +1;
    }

    
    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return;
        }
        l++;
        q_size--;
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
        return q_size;
    }
};

int main()
{
    Queue q;
    cout << "Q size : " << q.size() << "\n";
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

  
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size : "<<q.size()<<"\n";
    return 0;
}
