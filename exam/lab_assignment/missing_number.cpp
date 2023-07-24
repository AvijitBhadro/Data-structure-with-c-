#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> ar(n);
    for(int i=0; i<n-1; i++)
    {
        cin>>ar[i];
    }
    vector <int> cnt(n+1,0);
    for(int i=0; i<n; i++)
    {
        cnt[ar[i]]++;
    }

    for(int i=1; i<n+1; i++)
    {
        if(cnt[i]<1)
        {
            cout<<i;
        }
    }

    return 0;
}
