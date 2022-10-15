// Problem - Way Too Long Words
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        char str[101];
        cin.getline(str , 101);
        int nl = strlen(str);
        if(nl > 10){
            cout << str[0] << nl-2 << str[nl-1] << endl;
        }else{
            cout << str << endl;
        }
    }
    return 0;
}