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
            cout << "queue is empty\n";
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = tail;
        node *b = a->prev;
        b->nxt = NULL;
        tail = b;
        tail->nxt = NULL;
        delete a;
        sz--;
    }
    void Pop_front()
    {
        if (head == NULL)
        {
            cout << "queue is empty\n";
            return;
        }
        node *a = head;
        node *b = a->nxt;
        b->prev = NULL;
        head = b;
        delete a;
        head->nxt = NULL;
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
            cout << a->data << "\n";
            a = a->nxt;
        }
    }
    int getsize()
    {
        return sz;
    }
};

int main()
{
    Deque dq;
    dq.Push_back(5);
    dq.Push_back(10);
    dq.Push_back(15);
    dq.Push_back(20);
    dq.Push_back(25);



    return 0;
}