#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* nxt;
};

class LinkedList
{
public:
    node* head;
    int sz;
    LinkedList()
    {
        head =NULL;
        sz =0;
    }

    node* CreateNewNode(int value)
    {

        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        sz++;
        node* a = CreateNewNode(value);
        if(head==NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    void InsertAtAnyIndex(int index,int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node* a = head;
        int cur_index =0;
        while(cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node* newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

     void Traverse()
    {
        node* a =head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<'\n';
    }
  void searchforvalue(int value)
  {
      node* a= head;

      while(a!=NULL)
      {
          if(a->data == value)
          {
              cout<<"\"True\""<<'\n';
              break;
          }
          a = a->nxt;

      }
  }
};


int main()
{
    LinkedList l;
    l.InsertAtAnyIndex(0,1);
    l.InsertAtAnyIndex(1,2);
    l.InsertAtAnyIndex(2,3);
    l.InsertAtAnyIndex(3,4);
    l.InsertAtAnyIndex(4,5);

    l.Traverse();
    l.searchforvalue(3);




    return 0;
}
