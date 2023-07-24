#include<bits/stdc++.h>
using namespace std;

vector <int> even_generator(vector<int>a)
{
    vector<int> evens;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]%2==0)
            evens.push_back(a[i]);
    }

    return evens;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> a(5);
    a = {5,2,4,8,9};

    vector<int> evens = even_generator(a);

    for(int i=0; i<evens.size(); i++)
        cout<<evens[i]<<" ";


    return 0;
}
