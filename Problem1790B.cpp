#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> v;
        int m = s - r;
        v.push_back(m);
        
        for(int j = n - 1; j > 1; j--) {
            for(int i = m; i > 0; --i) {
                if((j - 1) <= (r - i) && (r - i) <= (m * (j - 1))) {
                    v.push_back(i);
                    r -= i;
                    break;
                }
            }
        }
        v.push_back(r);
        for(auto &p : v) {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}