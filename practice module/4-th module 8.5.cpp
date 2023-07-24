#include<bits/stdc++.h>
using namespace std;

int n,k;
bool found =false;

vector <int> merge_sort(vector <int> a)
{
    if(a.size()<=1)
        return a;

    int mid = a.size()/2;
    vector <int> b,c;

    for(int i=0; i<mid; i++)
        b.push_back(a[i]);

    for(int i=mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector <int>sorted_b = merge_sort(b);
    vector <int>sorted_c = merge_sort(c);

    int idx1 =0;
    int idx2 =0;
    vector <int> sorted_a;
    for(int i=0; i<a.size(); i++)
    {
        if(idx1== sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }

    }
    if(sorted_a.size() == n)
    {
        int i=0,j=n-1;
        while(i<j)
        {
            if((sorted_a[i]+sorted_a[j])>k)
                j--;
            else if((sorted_a[i]+sorted_a[j])<k)
                i++;
            else
            {
                found =true;
                break;
            }

        }
    }

    return sorted_a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector <int> sorted_a = merge_sort(a);
//    for(int i=0;i<n;i++)
//    cout<<sorted_a[i]<<" ";


    if(found)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
