// Problem - Team
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        int count_one = 0;
        int arr[3];
        for(int i = 0 ; i < 3 ; ++i){
            cin >> arr[i];
            if(arr[i] == 1){
                count_one++;
            }
        }
        if(count_one >= 2){
            count ++;
        }
    }
        cout << count << endl;
    return 0;
}