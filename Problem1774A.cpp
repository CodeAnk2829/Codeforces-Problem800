// Problem Add Plus Minus Sign
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int first = s[0] - 48;
        char ankit[n];
        int j = 0;
        for(int i = 1; i < n; ++i, ++j) {
            if(first == 1) {
                if(s[i] == '1') {
                    first -= (s[i] - 48);
                    ankit[j] = '-';
                } else {
                    ankit[j] = '+';
                }
            } else {
                first += (s[i] - 48);
                ankit[j] = '+';
            }
        }
        ankit[j] = 0;
        cout << ankit << endl;
    }
    return 0;
}