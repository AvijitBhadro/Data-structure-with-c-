#include <bits/stdc++.h>
using namespace std;

void print(list<int> l)
{
    // list<int>::iterator a = l.begin();
    auto a = l.begin();

    while (a != l.end())
    {
        cout << *a << " ";
        a++;
    }
    cout << "\n";
}

void Insert(list<int> &l, int index, int value)
{
    auto it = l.begin();
    advance(it, index);
    l.insert(it, value);
}
void Delete(list<int> &l, int index)
{
    auto it = l.begin();
    advance(it, index);
    l.erase(it);
}
int getvalue(list<int> l, int index)
{
    auto a = l.begin();
    advance(a, index);
    return *a;
}

bool search(list<int> l, int value)
{
    auto a = l.begin();
    while (a != l.end())
    {
        if (*a == value)
            return 1;
        a++;
    }

    return 0;
}
void Deletezero(list<int> &l)
{
    auto a = l.begin();
    int index = 0;
    while (a != l.end())
    {
        if (*a == 0)
        {
            Delete(l, index);
        }
        else
        {
            a++;
        }
        index++;
    }
}

int main()
{
    list<int> l;
    // l.push_front(4);
    // l.push_front(6);
    // l.push_front(2);
    // l.push_front(3);

    // l.push_back(5);
    // print(l);

    // Insert(l,1,100);
    // print(l);
    // Delete(l,4);
    // print(l);
    // cout << getvalue(l, 2) << "\n";

    // if (search(l, 4))
    //     cout << "true"
    //          << "\n";
    // else
    //     cout << "false"
    //          << "\n";
    l.push_front(0);
    l.push_back(0);
    l.push_back(2);
    l.push_back(0);
    l.push_back(5);
    print(l);

    Deletezero(l);
    print(l);
}
