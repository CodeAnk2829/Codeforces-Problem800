#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int no_of_1 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == 1) {
                no_of_1++;
            }
        }
        int count_zero = 0;
        int i = n -1;
        while(i >= 0 & a[i] != 1) {
            i--;
            count_zero++;
        }
        int count_one = 0;
        while (i >= 0 & a[i] != 0) {
            i--;
            count_one++;
        }

        if(a[n - 1] == 1) {
            cout << no_of_1 - count_one << endl;
        } else {
            if(count_zero >= no_of_1) {
                cout << no_of_1 << endl;
            } else {
                cout << no_of_1 - count_one << endl;
            }
        }
    }
    return 0;
}