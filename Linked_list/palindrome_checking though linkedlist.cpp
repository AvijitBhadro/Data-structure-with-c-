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
    void InsertAtAnyIndex(int index,int value)
    {

        if(index<0 || index>sz)
            return;
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }

        node*a = head;

        int cur_index =0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node* newnode = CreateNewNode(value);
        node*b = a;
        node*c = a->nxt;
        b->nxt = newnode;
        newnode->prev =b;
        if(c!=NULL)
        {
            newnode->nxt = c;
            c->prev = newnode;
        }

    }


      int palindrome_tester()
    {
        node* a;
        node* b = head;
        while ((b->nxt) != NULL)
        {
            b = b->nxt;
        }
        a = head;

        int p = 0;

        while(a!=NULL)
        {
            if(a->data == b->data)
            {
                p=1;
                a = a->nxt;
                b = b->prev;
                continue;
            }
            else
            {
                return 0;
            }
        }
        return p;
    }
    void is_palindrome()

    {
        if((palindrome_tester())==1)
            cout<<"True!\n";
        else
        {
            cout<<"False\n";
        }
    }




    int getsize()
    {
        return sz;
    }

};

int main()
{
    DoublyLinkedList dl;

    dl.InsertAtAnyIndex(0,1);
    dl.InsertAtAnyIndex(1,2);
    dl.InsertAtAnyIndex(2,3);
    dl.InsertAtAnyIndex(3,2);
    dl.InsertAtAnyIndex(4,1);
    dl.is_palindrome();



    return 0;
}
