#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max = 0;
    int df = 0;
    int sum = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
        
        df = sum - a;
        sum = df + b;

        if(max < sum){
            max = sum;
        }
    }
    cout << max;
    return 0;
}