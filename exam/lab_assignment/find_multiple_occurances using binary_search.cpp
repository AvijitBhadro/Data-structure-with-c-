#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    vector<int> indices;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == k)
        {
            indices.push_back(mid);
            int i = mid - 1;
            while (i >= left && arr[i] == k)
            {
                indices.push_back(i);
                i--;
            }
            i = mid + 1;
            while (i <= right && arr[i] == k)
            {
                indices.push_back(i);
                i++;
            }
            sort(indices.begin(), indices.end());
            break;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (indices.size() > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
