// Problem - Calculating function
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    if(n & 1) {
        cout << -(n + 1) / 2;
    } else {
        cout << (n / 2);
    }
    return 0;
}