// Problem - Beatiful Year
#include <iostream>
using namespace std;
int main(){
    int y, i, j, k, temp;
    int a[4];
    cin >> y;
    for(i = y + 1; i <= 9012; ++i){
        temp = i;
        
        for(j = 3; j >= 0; --j, temp /= 10){
            a[j] = (temp % 10);
        }
        for(j = 0; j < 3; ++j){
            for(k = j + 1; k < 4; ++k){
                if(a[k] == a[j]){
                    temp++;
                    break;
                }
            }
            if(temp){
                break;
            }
        }
        if(temp == 0){
            cout << i;
            break;
        }
    }
    return 0;
}
