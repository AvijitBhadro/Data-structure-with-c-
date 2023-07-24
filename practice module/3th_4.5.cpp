#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz = s.size();
    for(int i=0; i<sz; i++)
    {
        if(i%2==0)
        {
            s[i]+=1;
            if(s[i]>122)
              s[i]-=26;
        }
    }

    cout<<s;

    return 0;
}
