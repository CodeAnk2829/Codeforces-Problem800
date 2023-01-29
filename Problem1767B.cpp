// Problem Block Towers
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> v;
        long long int x;
        cin >> x;
        v.push_back(x);
        for(int i = 1; i < n; ++i) {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; ++i) {
            if (x < v[i])
            {
                int result = (v[i] - x + 1) / 2;
                x += result;
            }
        }
        cout << x << endl;
    }
    return 0;
}