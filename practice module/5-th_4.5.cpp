#include<bits/stdc++.h>

using namespace std;

const int N = 100000;
int arr1[N], arr2[N];
int freq[N];

int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> union_set;
    for (int i = 0; i < n; i++)
    {
        if (freq[arr1[i]]==0)
        {
            freq[arr1[i]] = 1;
            union_set.push_back(arr1[i]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (freq[arr2[i]]==0)
        {
            freq[arr2[i]] = 1;
            union_set.push_back(arr2[i]);
        }
    }
    sort(union_set.begin(), union_set.end());

    for (int i = 0; i < union_set.size(); i++)
        cout << union_set[i] << " ";
    cout << endl;

    return 0;
}
