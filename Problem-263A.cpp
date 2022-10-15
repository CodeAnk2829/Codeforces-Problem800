// Problem - Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    int i, j, count_i = 0, count_j = 0;
    for(int x = 0; x < 5; ++x){
        for(int y = 0; y < 5; ++y){
            cin >> a[x][y];
            if(a[x][y] == 1){
                i = x+1;
                j = y+1;
            }
        }
    }
    count_i = (i < 3) ? (3 - i) : (i - 3);
    count_j = (j < 3) ? (3 - j) : (j - 3);
    cout << (count_i + count_j);
     return 0;
}