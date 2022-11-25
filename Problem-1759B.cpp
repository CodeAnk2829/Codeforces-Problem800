// Problem Lost Permutation
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, s;
        cin >> m >> s;
        int b[1000] = {};
        int l = 0;
        for(int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            b[x] = 1;
            l = max(x, l);
        } 
        int sum = 0;
        int i = 1;
        while(s > 0) {
            if(b[i] == 0) {
                s -= i;
                b[i] = 1;
                if(s >= 0)
                    l = max(i, l);
            }
            i++;
        }
        
        if(s == 0) {
            int i = 1;
            while(i <= l && b[i] != 0) {
                i++;
            }
            if(i == l + 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}