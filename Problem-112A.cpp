// Problem - Petya and Strings
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str1[101];
    char str2[101];
    cin.getline(str1 , 101);
    cin.getline(str2 , 101);
    cout << strcmp(strlwr(str1) , strlwr(str2));
    return 0;
}