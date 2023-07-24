#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prev;
};
class DoublyLinkedList
{
public:
    node*  head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;

    }

    node* CreateNewNode(int value)
    {
        sz++;
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prev = NULL;

        return newnode;
    }

    void InsertAtHead(int value)
    {
        node*newnode = CreateNewNode(value);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prev = newnode;
        head = newnode;
    }

    void print()
    {
        node* a =head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }




};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(5);

    dl.print();

    return 0;
}
