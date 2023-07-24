#include <bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node<T> *nxt;
};

template <class T>
class Queue
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    node<T> *CreateNewNode(T val)
    {
        node<T> *newnode = new node<T>;
        newnode->data = val;
        newnode->nxt = NULL;
        return newnode;
    }
    void enqueue(T value)
    {
        sz++;
        node<T> *newnode = CreateNewNode(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->nxt = newnode;
        tail = newnode;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        if (sz == 1)
        {
            delete head;

            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T> *a = head;
        head = a->nxt;
        sz--;
        delete a;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty\n";
            
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    cout << q.size() << "\n";
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    cout << "\n\n";

    Queue<char> q2;
    q2.enqueue('a');
    q2.enqueue('b');
    q2.enqueue('c');
    cout << q2.size() << "\n";
    cout << q2.front() << "\n";
    q2.dequeue();
    cout << q2.front() << "\n";
    q2.dequeue();
    cout << q2.front() << "\n";
    return 0;
}