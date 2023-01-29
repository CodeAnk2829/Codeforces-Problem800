// Problem Cut the Triangle
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        set<int> x, y;
        for(int i = 0; i < 3; ++i) {
            int a, b;
            cin >> a >> b;
            x.insert(a);
            y.insert(b);
        }
        
        if(x.size() == 2 && y.size() == 2) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}