#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while(temp--) {
        int x;
        cin >> x;
        sum += x;
    }
    double h = sum / 100.0;
    cout << fixed;
    cout << setprecision(12) << (h/n)  * 100 << endl;
    return 0;
}