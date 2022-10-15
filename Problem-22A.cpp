// Problem - Second Order Statistics
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    auto it = upper_bound(v.begin(), v.end(), v[0]);
    if(it != v.end()) {
        cout << *it;
    } else {
        cout << "NO";
    }
    return 0;
}