// Problem Kevin's Permutation
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = (n / 2) + 1;
        int arr[n];
        for(int i = 0; i < n; ++i) {
            if((i & 1) == 0) {
                arr[i] = x++;
            } else {
                arr[i] = (x - (n / 2) - 1);
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}