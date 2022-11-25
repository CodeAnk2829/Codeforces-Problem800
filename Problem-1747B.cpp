// Program BAN BAN
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << (n + 1) / 2 << endl;
        int i , j;
        for(i = j = 1; j <= (n + 1) / 2; j++, i += 3) {
            cout << i << " " << (3 * n + 1) - i << endl;
        }
    }
    return 0;
}