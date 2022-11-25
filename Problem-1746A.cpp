// Problem Maxmina
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int flag = 0;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == 1) {
                flag = 1;
            }
        }
        if(flag == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}