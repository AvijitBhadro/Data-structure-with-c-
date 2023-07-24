#include<bits/stdc++.h>
using namespace std;


bool isSubset(vector<int> ar1, vector<int> ar2) {
    sort(ar1.begin(), ar1.end());
    sort(ar2.begin(), ar2.end());
    int i = 0, j = 0;
    while (i < ar1.size() && j < ar2.size()) {
        if (ar1[i] == ar2[j]) {
            i++;
            j++;
        } else if (ar1[i] < ar2[j]) {
            return false;
        } else {
            j++;
        }
    }
    return i == ar1.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> ar1(n);
    for (int i = 0; i < n; i++) {
        cin >> ar1[i];
    }
    cin >> m;
    vector<int> ar2(m);
    for (int i = 0; i < m; i++) {
        cin >> ar2[i];
    }
    if (isSubset(ar1, ar2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

