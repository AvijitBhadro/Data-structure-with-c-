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

    LinkedList()
    {
        head = NULL;
    }
    //creates a new node with data = value and nxt =NULL
    node* CreateNewNode(int value)
    {
        node * newnode = new node;
        newnode->data =value;
        newnode->nxt = NULL;

        return newnode;
    }
    //insert new value at Head O(1)
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);

        if(head == NULL)
        {
            head = a;
            return;
        }
        //if head is not NULL
        a->nxt =head;
        head =a;
    }
    void InsertAtTail(int value)
    {
        node* newnode =CreateNewNode(value);
        if(head ==NUll)
        {
            head = newnode;
            return;
        }
        node* temp = head;
        while(temp->nxt!=NUL)
        {
            temp = temp->nxt;
        }
        temp->nxt = newnode;


    }
    //Prints linkdedlist
    void Traverse()
    {
        node* temp =head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            a = a-> nxt;
        }

        cout<<"\n";

    }
    //search for a single value
    int  SearchDistinctValue(int value)
    {
//        node* a =head;
//        int index =0;
//        while(a!=NULL)
//        {
//            if(a->data==value)
//            {
//                return index;
//            }
//            a = a->nxt;
//            index++;
//        }
//        return -1;
    }
    //search all possible occurance
    void SearchAllValue(int value)
    {
//        node* a =head;
//        int index =0;
//        while(a!=NULL)
//        {
//            if(a->data==value)
//            {
//               cout<<value<<" is found at index "<<index<<"\n";
//            }
//            a = a->nxt;
//            index++;
//        }
    }
};


int main()
{
    LinkedList l;
    l.Traverse();
    l.InsertAtHead(10);
    l.Traverse();
   l.InsertAtHead(30);
   l.Traverse();
//    l.InsertAtHead(20);
//    l.Traverse();
//    l.Traverse();



//    cout<<"10 is found at "<<l.SearchDistinctValue(10)<<"\n";
//    cout<<"5 is found at "<<l.SearchDistinctValue(5)<<"\n";
//    cout<<"30 is found at "<<l.SearchDistinctValue(30)<<"\n";

   l.InsertAtTail(4);
    l.Traverse();

    return 0;
}
