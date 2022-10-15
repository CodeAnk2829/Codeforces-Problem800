// Problem - Consecutive Sum
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t-- ){
        int n, k;
        cin >> n >> k;
        vector <long long int> v;

        for(int i = 0; i < n; ++i) {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        int count = 0;
        for(int i = 0; i < n - k; ++i) {

            for(int j = i + k; j < n; ++j) {
                if (v[i] < v[j]) {
                    swap(v[i], v[j]);
                    break;
                }
            }
        }

        long long int sum = 0;

        for(int i = 0; i < k; ++i) {
            sum += v[i];
        }
        cout << sum << endl;
        }
    return 0;
}