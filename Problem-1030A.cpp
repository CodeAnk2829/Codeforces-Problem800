// Problem - In Search of an Easy Problem
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum == 0){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
    return 0;
}