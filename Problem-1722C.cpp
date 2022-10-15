// Problem - Word Game
#include <bits/stdc++.h>
using namespace std;
void printVec(vector <string> v[], int n) {
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <string> v[3];
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < n; ++i) {
                string str;
                cin >> str;
                v[i].push_back(str);
            }
        }
        printVec(v, n);
    }
    return 0;
}