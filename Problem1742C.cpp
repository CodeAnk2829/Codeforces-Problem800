#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        vector <string> str;
        for(int i = 0; i < 8; ++i) {
            string s;
            cin >> s;
            str.push_back(s);
        }
        for(int i = 0; i < 8; ++i) {
            int j = 0; 
            int k = 0;
            if(str[i][0] == 'R') {
                while(j < 8 && str[i][j] == 'R') j++;
            }
            if(str[0][i] == 'B') {
                while(k < 8 && str[k][i] == 'B') k++;
            }
            if(j == 8) {
                cout << "R" << endl;
                break;
            } 
            if(k == 8) {
                cout << "B" << endl;
                break;
            }
        }
    }
    return 0;
}