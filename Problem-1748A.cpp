#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        long long int result = (n + 1) >> 1;
        cout << result << endl;
    }
    return 0;
}