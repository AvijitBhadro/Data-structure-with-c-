#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(70);

    while(!q.empty())
    {
        cout<<q.front()<<"\n";
        q.pop();
    }

   
}

 // cout << q.size() << "\n";
    // cout << q.front() << "\n";
    // q.pop();
    // cout << q.front() << "\n";
    // q.pop();
    // cout << q.front() << "\n";
    // cout << q.empty() << "\n";

    // queue<char> q2;
    // q2.push('c');
    // q2.push('d');
    // q2.push('e');
    // cout << q2.size() << "\n";
    // cout << q2.front() << "\n";
    // q2.pop();
    // cout << q2.front() << "\n";
    // q2.pop();
    // cout << q2.front() << "\n";
    // cout << q2.empty() << "\n";