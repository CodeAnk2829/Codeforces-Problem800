// Problem - Presents
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <pair<int,int>> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(make_pair(x, i + 1));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i){
        cout << v[i].second << " ";
    }
    return 0;
}