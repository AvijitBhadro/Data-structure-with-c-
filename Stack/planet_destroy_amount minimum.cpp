#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c;
        cin>>n>>c;
        unordered_map<int,int>ump;
        for(int i=1; i<=n; i++)
        {
            int p;
            cin>>p;
         ump[p]++;


        }
        for(auto it:ump)
        {

            cout<<"key = "<<it.first<<"value = "<<it.second<<"\n";

        }




    }




}
