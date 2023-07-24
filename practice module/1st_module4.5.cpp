#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a;
    int input;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        a.push_back(input);
        sum+=a[i];

    }

//    for(int i=0; i<n; i++)
//    {
//
//        sum+=a[i];
//
//    }
    cout<<sum;

    return 0;
}
