// Problem - Spell Check
#include <bits/stdc++.h>
using namespace std;

bool check(char* str) {
    int count = 0, i = 0, j;
    char temp[6] = "Timur";
    while(temp[i] != 0) {
        for(j = 0; str[j]; ++j) {
            if(temp[i] == str[j]) {
                break;
            }
        }
        if(str[j] == 0) {
            return false;
        } else {
            i++;
        }
    }
    if(i == 5) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        cin.ignore();
      
        char str[n + 1];
        cin.getline(str, n + 1);
        bool result = false;
        if(strlen(str) == 5) {
            result = check(str);
            if(result == true) {
                cout << "Yes" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}