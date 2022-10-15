#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map <long int, int> m;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            m[x]++;
        }
        int ct = 0;
        for(auto &p : m) {
            if(p.second > 1) {
                ct++;
                break;
            }
        }
        if(ct > 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}