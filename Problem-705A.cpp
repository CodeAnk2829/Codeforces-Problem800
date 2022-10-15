// Problem - Hulk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 0;
    vector <string> v;
    for(int i = 0; i < 2 * n - 1; ++i) {
        if ((count != n)) {

            if ((i & 1))
            {
                v.push_back("that");
                count++;
            }
            else if (count & 1)
            {
                v.push_back("I love");
            }
            else
            {
                v.push_back("I hate");
            }
        }
    }
    v.push_back("it");
    for(auto &x : v) {
        cout << x << " ";
    }
    return 0;
}