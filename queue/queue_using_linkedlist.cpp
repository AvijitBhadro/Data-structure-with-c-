#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* nxt;
};

class Queue{
    public:
    node* head;
    node* tail;
    int sz;
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz =0;
    }
 node* CreateNewNode(int val)
 {
    node* newnode = new node;
    newnode->data = val;
    newnode-> nxt = NULL;
    return newnode;
 }
    void enqueue(int value)
    {
        sz++;
        node* newnode = CreateNewNode(value);
        if(head == NULL)
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
        if(sz==0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        if(sz==1)
        {
            delete head;
    
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node* a = head;
        head = a->nxt;
        sz--;
        delete a;
    }

    int front()
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return -1;
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
Queue q;
 q.enqueue(5);
 q.enqueue(10);
 q.enqueue(15);
 cout<<q.size()<<"\n";
  q.dequeue();
  q.dequeue();
  cout<<q.size()<<"\n";





    return 0;
}