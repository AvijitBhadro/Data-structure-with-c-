#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {

        if(a[i]==k)
        {
//            cout<<"YES\n";
                cout<<i<<" ";
//            return 0;//or break;
        }


    }



    return 0;
}
