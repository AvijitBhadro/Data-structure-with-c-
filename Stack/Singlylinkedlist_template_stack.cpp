#include<bits/stdc++.h>
using namespace std;


template <class T>
class node
{
public:
    T data;
    node<T> * nxt;
};
template<class T>
class LinkedList
{
public:

    node<T> * head;
    int sz;

    LinkedList()
    {
        head = NULL;
        sz=0;
    }
    //creates a new node with data = value and nxt =NULL
    node<T> *CreateNewNode(T value)
    {
        node<T> * newnode = new node<T>;
        newnode->data =value;
        newnode->nxt = NULL;
        sz++;

        return newnode;
    }
    //insert new value at Head O(1)
    void InsertAtHead(T value)
    {
        node<T> *a = CreateNewNode(value);

        if(head == NULL)
        {
            head = a;
            return;
        }
        //if head is not NULL
        a->nxt =head;
        head =a;
    }
    void DeleteAtHead()
    {
        if(head== NULL)
        {
            return;
        }
        node<T>*a = head;
        node<T>*b = head->nxt;
        head= b;
        delete a;
        sz--;
    }
   
    int getsize()
    {
        return sz;
    }

};
template<class T>
class Stack
{
    LinkedList<T> sl;
public:
    Stack()
    {

    }
    void push(T val)
    {

        sl.InsertAtHead(val);
    }
    void pop()
    {
        if(sl.getsize()==0)
        {
            cout<<"Stack is empty\n";
            return;
        }
        sl.DeleteAtHead();
    }
    T top()
    {
        if(sl.getsize()==0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        return sl.head->data;

    }

};


int main()
{
    Stack<int> st;
    st.push(3);
    st.push(6);
    st.push(9);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    cout<<"\n\n";

    Stack<char>st2;
    st2.push('y');
    st2.push('i');
    st2.push('a');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";

    return 0;
}
