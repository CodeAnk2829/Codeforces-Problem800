// Problem Yes Yes?
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while(tc--) {
        char str[51];
        cin.getline(str, 51);
        int string_length = strlen(str);
        int i = 0;
        while ((i < string_length - 1) && ((str[i] == 'Y' && str[i + 1] == 'e') || (str[i] == 'e' && str[i + 1] == 's') || (str[i] == 's' && str[i + 1] == 'Y'))) {
            i++;
        }
        if((i == string_length - 1) && (str[i] == 'Y' || str[i] == 'e' || str[i] == 's')) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}