#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ankit = max(a, max(b, c));
        int jayesh = min(a, min(b, c));
        int prince = ankit + jayesh;
        int ans = (a + b + c) - (prince);
        cout << ans << endl;
    }
    return 0;
}