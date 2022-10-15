// Problem - Word Capitalization
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[1001];
    cin.getline(str , 1001);
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
    cout << str;
    return 0;
}