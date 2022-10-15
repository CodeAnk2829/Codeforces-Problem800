// Problem - Stones on the Table
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    char *str = new char[n + 1];
    cin.getline(str , n + 1);
    int count = 0;
    for(int i = 0 ; str[i] ; ++i){
        if(str[i] == str[i+1]){
            count++;
        }
    }
    cout << count;
    return 0;
}