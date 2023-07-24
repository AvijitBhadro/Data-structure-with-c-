#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> v[1];
    v[0].push_back(3);
    v[0].push_back(3);
    vector<int> t = v[0];
  for (int i = 0; i < v[0].size(); i++) {
    cout << v[0][i] << " ";
}
    return 0;
}
