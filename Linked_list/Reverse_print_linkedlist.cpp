#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    //Creates a new node with data = value and nxt= NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }
    void ReversePrint2(node* a)
    {
        if(a==NULL)
            return;

        ReversePrint2(a->nxt);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);

    }
     void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

};
int main()
{
    LinkedList l;
    l.InsertAtHead(30);
    l.InsertAtHead(10);
    l.InsertAtHead(5);

    l.ReversePrint();
    l.Traverse();
}
