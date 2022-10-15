// Problem - Elephant
#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int step = 1;
    step = x / 5;
    if(x % 5 == 0){
        cout << step;
    }else{
        cout << step + 1;
    }
    return 0;
}