#include<bits/stdc++.h>
using namespace std;
//O(n)
void print(list<int>&l)
{
//    list<int>::iterator a = l.begin();
    auto a = l.begin();

    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    list<int>l;
    //push_front O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);

        //push_back O(1)
        l.push_back(5);
        l.push_back(3);
        l.push_back(2);
        print(l);

        //popback O(1)
        l.pop_back();
        l.pop_back();
        print(l);

        //popfront( O(1)
        l.pop_front();
        l.pop_front();
        print(l);





}
