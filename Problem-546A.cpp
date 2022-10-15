// Problem - Soldier and Bananas
#include <iostream>
using namespace std;
int main(){
    long int k, n, w, b = 0;
    cin >> k >> n >> w;
    if(((w * (w + 1)) / 2 * k) > n)
    b = (w * (w + 1) / 2) * k - n;
    cout << b;
    return 0;
}