#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> s(n);
        vector<long long int> a(n);
        for(int i = 0; i < n; ++i) {
            cin >> s[i];
            a[i] = s[i];
        }
        map<long long int, long long int> m;
        sort(a.begin(), a.end());
        for(int i = 0; i < n - 1; ++i) {
            m[a[i]] = a[i] - a[n - 1];
        }
        m[a[n - 1]] = a[n - 1] - a[n - 2];
        for(int i = 0; i < n; ++i) {
            cout << m[s[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}