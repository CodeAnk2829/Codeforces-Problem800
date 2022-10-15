#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
        int min = a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
        int second_max = (a + b + c) - (max + min);
        
        if(max == (second_max + min)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}