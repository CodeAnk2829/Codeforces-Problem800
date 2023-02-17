#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        char s[31];
        cin.getline(s, 31);
        char a[31] = "314159265358979323846264338327";
        int count = 0;
        int i = 0;
        if(s[0] == '3') {
            while(s[i] && s[i] == a[i]) {
                count++;
                ++i;
            }
        }
        cout << count << endl;
    }
    return 0;
}