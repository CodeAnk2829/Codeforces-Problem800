// Problem Elimination of a Ring
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s.insert(x);
        }
        if(s.size() == 2) {
            cout << (n / 2 + 1) << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}