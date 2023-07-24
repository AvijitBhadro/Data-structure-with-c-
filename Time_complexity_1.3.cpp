#include<bits/stdc++.h>
using namespace std;
/*
Time complexity -> O(n+n^2) = O(n^2)
Space complexity -> O(n)

*/
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);//ekhane ekta array/vector neya hoise n size tai O(n)

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //i = 0 --> n
    //i = 1 --> n
    //i = 2 --> n
    //i = n-1 --> n
    //n*n =n^2
    for(int i=0; i<n; i++)
    {
        string ans ="No\n";
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i]== a[j])
            {
                ans = "Yes\n";//ekhane eksathe 2 ta loop tai n*n times number cholbe
            }
        }
        cout<<"i = "<<i<<" "<<ans;
    }





    return 0;
}
