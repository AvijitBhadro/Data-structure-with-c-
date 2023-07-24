#include<bits/stdc++.h>
using namespace std;
void sort_it(vector <int> ar)
{
// for(int i=0;i<ar.size();i++)
// cout<<ar[i]<<" ";
int sz = ar.size();
vector <int> cnt(sz,0);
for(int i=0;i<sz;i++)
{
    cnt[ar[i]]++;
}
for(int i=0;i<sz;i++)
{
    if(cnt[i]>=1)
    {
        for(int j=1;j<=cnt[i];j++)
        {
            cout<<i<<" ";
        }
    }
}

}
int main()
{
   int n;
   cin>>n;
   vector <int> ar(n);
   for(int i=0;i<n;i++)
   cin>>ar[i];

sort_it(ar);


}