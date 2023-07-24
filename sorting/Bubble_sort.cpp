/* Time complexity -> O(n^2)
Memory complexity -> O(n)

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int pass=0;pass<n;pass++)
    {
        int last =n-1-pass;
        bool sorted =true;
        for(int j=0;j<=last-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted =false;
            }
                    for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";

        }
        printf("\n");
        if(sorted)
            break;
//        cout<<"After pass "<<pass<<": ";
//        for(int i=0;i<n;i++)
//            cout<<a[i]<<" ";
//        cout<<"\n";
    }
    cout<<"After sorting: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";


   return 0;
}


