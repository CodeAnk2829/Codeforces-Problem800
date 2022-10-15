// Problem - Bit++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 0, n;
    cin >> n;
    char str[4];
    cin.ignore();
    while(n--){
        cin.getline(str , 4);
        for(int i = 0 ; str[i] ; ++i){
            if(str[i] == '+'){
                x++;
                break;
            }else if(str[i] == '-'){
                x--;
                break;
            }
        }
    }
    cout << x ;
    return 0;
}