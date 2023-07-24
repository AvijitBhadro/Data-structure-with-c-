#include<bits/stdc++.h>
using namespace std;
void print(list <int> &l)
{
// list<int>::iterator a = l.begin();
auto a = begin();
while(a!=l.end())
{
cout<<*a<<" ";
a++;

}
cout<<"\n";



}


int main()
{
    list<int> l;
    l.push_front(5);
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_back(8);
    print(l);



}
