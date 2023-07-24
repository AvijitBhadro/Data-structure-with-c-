#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l,r;
    cin>>l>>r;
    a.erase(a.begin()+(l-1),a.begin()+r);
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
