// Problem GamingForces
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int count_1 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == 1) count_1++;
        }
        int rem = (n - count_1);
        int ans = ((count_1 + 1) / 2) + rem;
        cout << ans << endl;
    }
    return 0;
}