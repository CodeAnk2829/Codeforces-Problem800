// Problem - Two Elevators
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long int a, b, c;
        cin >> a >> b >> c;
        long int time_a = (a - 1);
        long int time_b = (b > c) ? (b - 1) : (2 * c - b - 1);
        if(time_a < time_b) {
            cout << 1 << endl;
        } else if(time_a > time_b) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}