// Problem - Death's Blessing
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long int> a(n), b(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];

        vector <pair<long int, long int>> v;
        for(int i = 0; i < n; ++i) {
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());
        long long sum = v[0].second;
        for(int i = 0; i < n - 1; ++i) {
            sum += (v[i].first + v[i + 1].second);
        }
        cout << sum << endl;
    }
    return 0;
}