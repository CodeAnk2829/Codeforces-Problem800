#include <bits/stdc++.h>
using namespace std;
char* f(char* str) {
    for (int i = 0; str[i]; ++i)
    {
        if (str[i] == 'G')
        {
            str[i] = 'B';
        }
    }
    return str;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cin.ignore();
        char str1[n + 1];
        cin.getline(str1, n + 1);
        
        char str2[n + 1];
        cin.getline(str2, n + 1);

        strcpy(str1, f(str1));
        strcpy(str2, f(str2));
        if(strcmp(str1, str2) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}