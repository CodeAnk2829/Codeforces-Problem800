// Problem - Boy or Girl
#include <bits/stdc++.h>
using namespace std;
int main(){
char str[101];
cin.getline(str , 101);
int count = 0;
for(int i = 0 ; str[i] ; ++i){
    int j;
    for(j = 0 ; j < i ; ++j){
        if(str[i] == str[j]){
            break;
        }
    }
    if(j == i){
        count++;
    }
}
if(count & 1){
    cout << "IGNORE HIM!";
}else{
    cout << "CHAT WITH HER!";
}
    return 0;
}