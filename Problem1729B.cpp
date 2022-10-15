// Problem - Decode String
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        char str[n + 2];
        cin.getline(str, n + 2);
        str[n + 1] = 0;
        int i = 0, j = 0;
        while(str[i] != 0) {
            if(str[i + 2] == '0' && str[i + 3] != '0') {
                s.push_back((str[i] - 48) * 10 + (str[i + 1] - 48) + 96);
                i += 3;
            } else {
                s.push_back((str[i] - 48) + 96);
                i++;
            }
        }
        cout << s << endl;
    }
    return 0;
}