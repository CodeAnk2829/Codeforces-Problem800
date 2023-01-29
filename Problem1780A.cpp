// Problem - Hayato and School
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        vector<int> vo;
        vector<int> ve;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] & 1) {
                vo.push_back(i + 1);
            } else {
                ve.push_back(i + 1);
            }
        }
        if(vo.size() > 0) {
            if(vo.size() >= 3) {
                cout << "YES" << endl;
                cout << vo[0] << " " << vo[1] << " " << vo[2] << endl;
            } else if(ve.size() >= 2) {
                cout << "YES" << endl;
                cout << vo[0] << " " << ve[0] << " " << ve[1] << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}