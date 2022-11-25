#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> v;
        int ct = 0;
        int temp = 0;
        for(int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            if(temp != x) {
                v.push_back(x);
                temp = x;
            }
        }
        v.push_back(INT_MAX);
        if(n == 1) {
            ct++;
        } else {
            for(int i = 0; i < v.size(); ++i) {
                if(i == 0 && v[i] < v[i + 1]) {
                    ct++;
                } else if(v[i - 1] > v[i] && v[i] < v[i + 1]) {
                    ct++;
                }
            }
        }
        if(ct == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}