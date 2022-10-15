// Problem - Watermelon
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n & 1){
        cout << "NO";
    }else if(n != 2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}