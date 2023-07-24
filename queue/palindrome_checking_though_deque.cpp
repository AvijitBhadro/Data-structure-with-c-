#include<bits/stdc++.h>
using namespace std;

int main()
{
deque<int>dq;
dq.push_back(1);
dq.push_back(2);
dq.push_back(2);
dq.push_back(1);
dq.push_back(1);


int f = 0;

while(!(dq.empty()))
{
if(dq.front() == dq.back())
{
    f=1;
    dq.pop_front();
    dq.pop_back();
}
else{
    f=0;
    break;
}

}
if(f==1)
cout<<"Palindrome\n";
else
cout<<"Not palindrome\n";


    return 0;
}