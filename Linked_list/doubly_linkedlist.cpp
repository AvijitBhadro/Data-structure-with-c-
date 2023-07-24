#include <bits/stdc++.h>

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
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with the given data and returns it O(1)
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {

        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        sz++;
        node *a = head;
        newnode->nxt = a;
        a->prev = newnode;
        head = newnode;
    }

    // Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if (index < 0 || index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prev = a;
        node *b = a->nxt;
        b->prev = newnode;
        a->nxt = newnode;
        sz++;
    }

    // Deletes the given index O(n)
    void Delete(int index)
    {
        if (index >= sz)
        {
            cout << index << " doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prev;
        node *c = a->nxt;
        if (b != NULL)
        {
            b->nxt = c;
        }
        if (c != NULL)
        {
            c->prev = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
    }

    // Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    // Reverse the doubly linked list O(n)
    void Reverse()
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != sz - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while (b != NULL)
        {
            swap(b->nxt, b->prev);
            b = b->prev;
        }
        head = a;
    }

    void Delete_zero()
    {
        node *a = head;
        while (a != NULL)
        {
            if (a->data == 0)
            {
                node* b = a;
                a = a->nxt;
                delete b;
            }
            else
            {
                a = a->nxt;
            }
        }
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(0);
    dl.InsertAtHead(5);
    dl.InsertAtHead(0);
    dl.InsertAtHead(2);
    dl.InsertAtHead(0);

    // dl.Traverse();
    // dl.Delete_zero();

    dl.Traverse();

    return 0;
}
