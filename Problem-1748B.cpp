#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    cin >> t;
    while(t--) {
        map<char, int> m;
        long long int n;
        cin >> n;
        cin.ignore();
        char s[n + 1];
        cin.getline(s, n + 1);
        long long int diverse = 0;
        for(long long int i = 0; i < n; ++i) {
            int max_freq = 1;
            int size = 0;
            for(long long int j = i; m[s[j]] <= 10 && s[j]; ++j) {
                m[s[j]]++;
                size = m.size();
                max_freq = max(max_freq, m[s[j]]);
                if(size >= max_freq) diverse++;
            }
            m.clear();
        }
        cout << diverse << endl;
    }
    return 0;
}