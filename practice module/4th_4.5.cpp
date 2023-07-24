#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector <int> v1(n);

    for(int i=0; i<n; i++)
    {
        cin>>v1[i];

    }
    cin>>m;
    vector <int> v2(m);

    for(int i=0; i<m; i++)
    {
        cin>>v2[i];

    }
    int max = *max_element(v1.begin(),v1.end());
    int len = max+1;

//   vector <int>  freq(len);
//
//    for(int i=0; i<n; i++)
//    {
//        freq[v1[i]]++;
//    }

    vector <int> freq(len);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v2[i] == v1[j])
                freq[v1[j]]++;
        }
    }

    for(int i=0; i<len; i++)
    {
        if(freq[i]>=1)
            cout<<i<<" ";
    }



    return 0;
}
