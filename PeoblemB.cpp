#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char s[n + 1];
        cin.ignore();
        cin.getline(s, n + 1);
        char ankit = s[0];
        for(int i = 0; s[i]; ++i) {
            ankit = max(ankit, s[i]);
        }
        cout << ankit - 96 << endl;
    }
    return 0;
}