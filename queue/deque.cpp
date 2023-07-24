

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *nxt;
};

class Deque
{
public:
    node *head;
    node *tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *CreateNode(int val)
    {
        node *newnode = new node;
        newnode->data = val;
        newnode->prev = NULL;
        newnode->nxt = NULL;

        return newnode;
    }

    void Push_front(int val)
    {
        node *newnode = CreateNode(val);
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

    void Push_back(int val)
    {
        node *newnode = CreateNode(val);
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
        node *a = tail;
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

        node *a = head;
        head = head->nxt;
        delete a;
        head->prev = NULL;
        sz--;
    }
    int front()
    {
        return head->data;
    }
    int back()
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
        node *a = head;
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
    int Max()
    {
        node *a = head;
        int Max = a->data;
        while (a != NULL)
        {
            if (a->data > Max)
            {
                Max = a->data;
            }
            a = a->nxt;
        }
        return Max;
    }

    int Min()
    {
        node *a = head;
        int Min = a->data;
        while (a != NULL)
        {
            if (a->data < Min)
            {
                Min = a->data;
            }
            a = a->nxt;
        }
        return Min;
    }
};

int main()
{
    Deque dq;
    dq.Push_back(1);
    dq.Push_back(2);
    dq.Push_back(2);
    dq.Push_back(2);
    dq.Push_back(1);

    int flag = 1;
    while (dq.getsize() != 0)
    {
        if (dq.front() != dq.back())
            flag = 0;

        dq.Pop_front();
        dq.Pop_back();
    }
    if (flag == 1)
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";

    return 0;
}

/*

 dq.Push_back(5);
    dq.Push_back(10);
    dq.Push_back(15);

    dq.Push_front(9);
    dq.Push_front(19);
    dq.Push_front(29);



    dq.Pop_back();
    dq.Pop_front();
    dq.print();
    // cout<<"\n\n";
    // cout<<dq.front()<<"\n";
    // cout<<dq.back()<<"\n";
*/
