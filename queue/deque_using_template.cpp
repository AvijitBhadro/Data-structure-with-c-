#include <bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node<T> *prev;
    node<T> *nxt;
};
template <class T>
class Deque
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T> *CreateNode(T val)
    {
        node<T> *newnode = new node<T>;
        newnode->data = val;
        newnode->prev = NULL;
        newnode->nxt = NULL;

        return newnode;
    }

    void Push_front(T val)
    {
        node<T> *newnode = CreateNode(val);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        head->prev = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    void Push_back(T val)
    {
        node<T> *newnode = CreateNode(val);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        tail->nxt = newnode;
        newnode->prev = tail;
        tail = newnode;
        sz++;
    }
    void Pop_back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty\n";
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T> *a = tail;
        tail = tail->prev;
        delete a;
        tail->nxt = NULL;
        sz--;
    }
    void Pop_front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty\n";
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T> *a = head;
        head = head->nxt;
        delete a;
        head->prev = NULL;
        sz--;
    }
    T front()
    {
        return head->data;
    }
    T back()
    {
        return tail->data;
    }
    void print()
    {
        if (sz == 0)
        {
            cout << "queue is empty"
                 << "\n";
            return;
        }
        node<T> *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    int getsize()
    {
        return sz;
    }
};

int main()
{
    Deque<char> dq;

    dq.Push_back('a');
    dq.Push_back('b');
    dq.Push_back('c');
    dq.Push_back('b');
    dq.Push_back('a');
    dq.print();

    int flag = 1;
    while (dq.getsize() != 0)
    {
        if (dq.front() != dq.back())
            flag = 0;

        if (dq.getsize() != 0)
            dq.Pop_front();
        if (dq.getsize() != 0)
            dq.Pop_back();
    }
    if (flag == 1)
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";

    return 0;
}

/*
 Deque<int> dq;
    dq.Push_back(5);
    dq.Push_back(10);
    dq.Push_back(15);

    dq.Push_front(9);
    dq.Push_front(19);
    dq.Push_front(29);

    dq.Pop_back();
    dq.Pop_front();
    dq.print();

    cout << "\n\n";
    cout << dq.front() << "\n";
    cout << dq.back() << "\n";
*/