#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    int mul =1;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0 && v[i]!=0)
        {
            mul *= v[i];
        }
    }
    cout<<mul<<" \n";


    return 0;
}
