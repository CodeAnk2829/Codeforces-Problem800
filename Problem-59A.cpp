// Problem - Word
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[101];
    cin.getline(str , 101);
    int count_U = 0, count_l = 0;
    for(int i = 0; str[i]; ++i){
        if(str[i] >= 'A' && str[i] <= 'Z')
        count_U ++;
        else
        count_l++;
    }
    if(count_U > count_l){
        strupr(str);
    }else{
        strlwr(str);
    }
    cout << str;
    return 0;
}