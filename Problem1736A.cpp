#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ct_a = 0;
        int ct_b = 0;
        vector <int> a(n), b(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == 1) ct_a++;
        }
        for(int i = 0; i < n; ++i) {
            cin >> b[i];
            if(b[i] == 1) ct_b++;
        }
        
        int diff = ct_a > ct_b ? (ct_a - ct_b) : (ct_b - ct_a);
        int count = 0;
        for(int i = 0; i < n && count < diff; ++i) {
            if(a[i] != b[i]) {
                a[i] = 1 - a[i];
                count++;
            }
        }
        
        int i = 0; 
        while(i < n && (a[i] ^ b[i]) == 0) i++;
        if(i < n) diff++;
        cout << diff << endl;
    }
    return 0;
}