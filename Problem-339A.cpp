// Problem - Helpful Maths
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[101];
    cin.getline(str , 101);
    int n = strlen(str) / 2 + 1;
    for(int r = 1 ; r < n ; r++){
        for(int i = 0 ; i < 2 * (n - r) ; i += 2){
            if(str[i] > str[i+2]){
                char temp = str[i];
                str[i] = str[i+2];
                str[i+2] = temp;
            }
        }
    }
    cout << str;
    return 0;
}