// Problem - Ultra-Fast Mathematician
#include <bits/stdc++.h>
using namespace std;
int main() {
    char str1[101], str2[101];
    cin.getline(str1, 101);
    cin.getline(str2, 101);
    char str[101];
    int j = 0;
    for(int i = 0; str1[i]; ++i) {
        if(str1[i] ^ str2[i]) {
            str[j] = '1';
            ++j;
        } else {
            str[j] = '0';
            ++j;
        }
    }
    str[j] = 0;
    cout << str;
    return 0;
}