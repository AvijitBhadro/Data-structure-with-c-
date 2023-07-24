#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector <int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag =0;
    int low = 0,high =n-1;
    while(low<=high)
    {

        int mid =(low+high)/2;
        if(a[mid]==k)
        {
            flag=1;
            cout<<"YES "<<mid<<"\n";
        }
        if(a[mid]>k)
        {
            high = mid-1;
        }
        else
        {
            low = mid +1;
        }
        if(low>high)
        {cout<<"Low = "<<low <<endl<<"high ="<<high<<endl;
        }
    }
   if(flag ==0)
    cout<<"No\n";


    return 0;
}
