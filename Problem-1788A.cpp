// Problem One and Two
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int ct_2 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == 2) {
                ct_2++;
            }
        }
        if(ct_2 & 1) {
            cout << -1 << endl;
        } else if(ct_2 == n) {
            cout << (n / 2) << endl;
        } else if(ct_2 == 0) {
            cout << 1 << endl;
        } else {
            int sec1 = 0, sec2 = ct_2;
            int k = 0;
            for(int i = 0; i < n - 1; ++i) {
                k++;
                if(a[i] == 2) {
                    sec1++;
                    sec2--;
                }
                if(sec1 == sec2) {
                    break;
                }
            }
            cout << k << endl;
        }
    }
    return 0;
}